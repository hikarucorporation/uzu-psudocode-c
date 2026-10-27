// Function : pack_anything
// Namespace: 
// Entry    : 0054d890
// Prototype: undefined pack_anything(long * param_1, undefined8 param_2, uint param_3, void * param_4)
// Body     : 0054d890 - 0054d8f9


void pack_anything(long *param_1,undefined8 param_2,uint param_3,void *param_4)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  int aiStack_38 [4];
  
  lVar1 = (long)(int)param_3;
  piVar2 = aiStack_38 + lVar1 * -4;
  piVar3 = piVar2;
  if (0 < (int)param_3) {
    (aiStack_38 + lVar1 * -4 + -2)[0] = 0x54d8d3;
    (aiStack_38 + lVar1 * -4 + -2)[1] = 0;
    memcpy(aiStack_38 + lVar1 * -4 + 4,param_4,(ulong)param_3 << 4);
    piVar3 = aiStack_38 + lVar1 * -4;
  }
  *piVar2 = 2;
  *(undefined8 *)(aiStack_38 + lVar1 * -4 + 2) = param_2;
  piVar3[-2] = 0x54d8ed;
  piVar3[-1] = 0;
  obj_list(param_1,0,param_3 + 1,piVar2);
  return;
}


