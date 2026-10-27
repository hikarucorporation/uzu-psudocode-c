// Function : bicoeff_save
// Namespace: 
// Entry    : 005681c0
// Prototype: undefined bicoeff_save(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, int * param_10)
// Body     : 005681c0 - 0056825d


void bicoeff_save(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,int *param_10)

{
  short sVar1;
  short sVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  double dVar6;
  undefined8 extraout_RDX;
  char *pcVar7;
  ulong uVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar9;
  double in_stack_00000008;
  
  puVar3 = gensym("#X");
  puVar4 = gensym("obj");
  sVar1 = *(short *)(param_9 + 0x28);
  sVar2 = *(short *)(param_9 + 0x2a);
  piVar5 = (int *)binbuf_getvec(*(long *)(param_9 + 0x10));
  dVar6 = (double)atom_getsymbol(piVar5);
  pcVar7 = (char *)(ulong)(uint)(int)sVar1;
  uVar8 = (ulong)(uint)(int)sVar2;
  uVar9 = binbuf_addv(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      param_10,0x65b11a,puVar3,puVar4,pcVar7,uVar8,dVar6);
  binbuf_addv(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,0x656033,
              extraout_RDX,puVar4,pcVar7,uVar8,in_stack_00000008);
  return;
}


