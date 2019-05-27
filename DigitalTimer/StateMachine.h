#pragma once

#include <iostream>
#include <stack>
#include <memory>

#include "State.h"

typedef std::unique_ptr<State> StateRef;

class StateMachine
{
private :
	std::stack<StateRef> stackState;
	StateRef newState;
	bool isAdding;
	bool isReplacing;
	bool isRemoving;
public:
	StateMachine();
	~StateMachine();

	void addState(StateRef newState, bool isReplacing = true);
	void processStateChange();
	void removeState() { isRemoving = true; }
	StateRef& getActiveState() { return stackState.top(); }
};

