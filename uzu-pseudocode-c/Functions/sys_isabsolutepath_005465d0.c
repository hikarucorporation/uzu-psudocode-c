// Function : sys_isabsolutepath
// Namespace: 
// Entry    : 005465d0
// Prototype: bool sys_isabsolutepath(char * param_1)
// Body     : 005465d0 - 005465e1


bool sys_isabsolutepath(char *param_1)

{
  return *param_1 == '~' || *param_1 == '/';
}


