// Function : fd_read
// Namespace: 
// Entry    : 00599ea0
// Prototype: ssize_t fd_read(int param_1, __off_t param_2, void * param_3, size_t param_4)
// Body     : 00599ea0 - 00599ee6


ssize_t fd_read(int param_1,__off_t param_2,void *param_3,size_t param_4)

{
  __off_t _Var1;
  ssize_t sVar2;
  
  _Var1 = lseek(param_1,param_2,0);
  if (_Var1 == param_2) {
    sVar2 = read(param_1,param_3,param_4);
    return sVar2;
  }
  return -1;
}


