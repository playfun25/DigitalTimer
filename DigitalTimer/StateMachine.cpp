#include "StateMachine.h"



StateMachine::StateMachine()
{
}


StateMachine::~StateMachine()
{
}

void StateMachine::addState(StateRef newState, bool isReplacing)
{
	isAdding = true;
	this->isReplacing = isReplacing;
	this->newState.swap(newState);
}

void StateMachine::processStateChange()
{
	if (isRemoving && !stackState.empty()) {
		stackState.pop();
		if (!stackState.empty())
			stackState.top()->resume();
		isRemoving = false;
	}
	if (isAdding) {
		if (!stackState.empty()) {
			if (isReplacing)
				stackState.pop();
			else
				stackState.top()->pause();
		}
		stackState.push(std::move(newState));
		stackState.top()->init();
		isAdding = false;
	}
}
