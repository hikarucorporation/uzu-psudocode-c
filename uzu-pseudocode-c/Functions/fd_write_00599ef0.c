// Function : fd_write
// Namespace: 
// Entry    : 00599ef0
// Prototype: ssize_t fd_write(int param_1, __off_t param_2, void * param_3, size_t param_4)
// Body     : 00599ef0 - 00599f36


ssize_t fd_write(int param_1,__off_t param_2,void *param_3,size_t param_4)

{
  __off_t _Var1;
  ssize_t sVar2;
  
  _Var1 = lseek(param_1,param_2,0);
  if (_Var1 == param_2) {
    sVar2 = write(param_1,param_3,param_4);
    return sVar2;
  }
  return -1;
}


