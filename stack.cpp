/* stack.cpp */

#include "stack.h"

Array Stack::getQueue() {
	return queue;
}

void Stack::push(Variant element) {
	queue.push_front(element);
}

void Stack::pushBack(Variant element) {
	queue.push_back(element);
}

Variant Stack::first() {
	return queue.pop_front();
}

Variant Stack::last() {
	return queue.pop_back();
}

int Stack::size() {
	return queue.size();
}

bool Stack::isEmpty() {
	return queue.is_empty();
}

void Stack::drop() {
	queue.clear();
}

void Stack::_bind_methods() {
	ClassDB::bind_method(D_METHOD("getQueue"), &Stack::getQueue);
	ClassDB::bind_method(D_METHOD("push", "element"), &Stack::push);
	ClassDB::bind_method(D_METHOD("pushBack", "element"), &Stack::pushBack);
	ClassDB::bind_method(D_METHOD("first"), &Stack::first);
	ClassDB::bind_method(D_METHOD("last"), &Stack::last);
	ClassDB::bind_method(D_METHOD("size"), &Stack::size);
	ClassDB::bind_method(D_METHOD("isEmpty"), &Stack::isEmpty);
	ClassDB::bind_method(D_METHOD("drop"), &Stack::drop);
};

Stack::Stack() {
	queue = Array();
}