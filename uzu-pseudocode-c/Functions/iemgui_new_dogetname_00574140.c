// Function : iemgui_new_dogetname
// Namespace: 
// Entry    : 00574140
// Prototype: undefined8 * iemgui_new_dogetname(undefined8 param_1, int param_2, long param_3)
// Body     : 00574140 - 005741bf


undefined8 * iemgui_new_dogetname(undefined8 param_1,int param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float fVar5;
  char acStack_58 [80];
  
  iVar1 = *(int *)(param_3 + (long)param_2 * 0x10);
  if (iVar1 == 1) {
    fVar5 = (float)atom_getfloatarg(param_2,100000,param_3);
    sprintf(acStack_58,"%d",(int)fVar5);
    puVar4 = gensym(acStack_58);
    return puVar4;
  }
  if (iVar1 != 2) {
    return (undefined8 *)0x0;
  }
  puVar2 = (undefined8 *)atom_getsymbolarg(param_2,100000,param_3);
  puVar3 = gensym("empty");
  puVar4 = (undefined8 *)0x0;
  if (puVar3 != puVar2) {
    puVar4 = puVar2;
  }
  return puVar4;
}


