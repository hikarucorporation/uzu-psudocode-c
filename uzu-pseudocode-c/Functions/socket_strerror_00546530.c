// Function : socket_strerror
// Namespace: 
// Entry    : 00546530
// Prototype: undefined socket_strerror(int param_1, char * param_2, uint param_3)
// Body     : 00546530 - 00546561


void socket_strerror(int param_1,char *param_2,uint param_3)

{
  char *pcVar1;
  
  if ((int)param_3 < 1) {
    return;
  }
  pcVar1 = strerror(param_1);
  snprintf(param_2,(ulong)param_3,"%s",pcVar1);
  return;
}


