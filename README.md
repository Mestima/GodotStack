# GodotStack
 A stack class for Godot Engine
 
## Supported versions
| Godot version | Supported | Branch |
| - | - | - |
| 4.x | yes | main |

## Compilation
- Download GodotStack and place it to the Godot `modules` folder.
- Rename `GodotStack-main` to `GodotStack`
- Compile Godot like usual using one of [these guides](https://docs.godotengine.org/en/stable/development/compiling/index.html).

Example compilation `Windows` command: `scons p=windows tools=yes -j4`

## Methods
```gdscript
stack.getQueue() # get stack as an array
stack.push(element: Variant) # push a new element to stack 1st position
stack.pushBack(element: Variant) # push a new element to stack last position
stack.first() # get first stack element
stack.last() # get stack last element
stack.size() # get stack size
stack.isEmpty() # returns a boolean value indicates that stack is empty or not
stack.drop() # removes all stack elements
```
