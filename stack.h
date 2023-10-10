/* stack.h */

#ifndef STACK_H
#define STACK_H

#include "core/object/ref_counted.h"
#include "core/string/ustring.h"
#include "core/variant/variant.h"
#include "core/variant/array.h"
#include "core/variant/dictionary.h"

class Stack : public RefCounted {
    GDCLASS(Stack, RefCounted);

    Array queue;

protected:
    static void _bind_methods();

public:
	Array getQueue();
	void push(Variant element);
	void pushBack(Variant element);
	Variant first();
	Variant last();
	int size();
	bool isEmpty();
	void drop();
    Stack();
};

#endif // STACK_H