// Function : clone_get_instance
// Namespace: 
// Entry    : 00504460
// Prototype: undefined8 clone_get_instance(long * param_1, int param_2)
// Body     : 00504460 - 005044a3


undefined8 clone_get_instance(long *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 != *(long *)PTR_clone_class_00715970) {
    return 0;
  }
  iVar2 = param_2 - *(int *)((long)param_1 + 0x84);
  if (iVar2 < 0) {
    return *(undefined8 *)param_1[8];
  }
  iVar1 = (int)param_1[7] + -1;
  if (iVar2 < (int)param_1[7]) {
    iVar1 = iVar2;
  }
  return *(undefined8 *)(param_1[8] + (long)iVar1 * 0x10);
}


