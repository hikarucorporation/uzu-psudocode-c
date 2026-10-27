// Function : my_numbox_save
// Namespace: 
// Entry    : 005a5fe0
// Prototype: undefined my_numbox_save(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, int * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005a5fe0 - 005a6211


void my_numbox_save(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,int *param_10,undefined8 param_11,undefined8 param_12,char *param_13
                   ,undefined8 param_14)

{
  double dVar1;
  short sVar2;
  short sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_RDX;
  char *pcVar7;
  ulong uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double in_stack_ffffffffffffff18;
  undefined8 local_68 [4];
  undefined8 local_48 [3];
  
  iemgui_save(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,local_68,
              local_48,param_12,param_13,param_14);
  if ((*(uint *)(param_9 + 0x440) & 0x8000000) != 0) {
    *(uint *)(param_9 + 0x440) = *(uint *)(param_9 + 0x440) & 0xf7ffffff;
    sys_queuegui(param_9,*(long *)(param_9 + 0x30),0x5a68b0);
  }
  puVar4 = gensym("#X");
  puVar5 = gensym("obj");
  sVar2 = *(short *)(param_9 + 0x28);
  sVar3 = *(short *)(param_9 + 0x2a);
  puVar6 = gensym("nbx");
  dVar1 = *(double *)(param_9 + 0x4a8);
  dVar10 = *(double *)(param_9 + 0x4b0);
  iem_symargstoint((uint *)(param_9 + 0x448));
  iem_fstyletoint((uint *)(param_9 + 0x440));
  dVar11 = 0.0;
  if ((*(byte *)(param_9 + 0x448) & 1) != 0) {
    dVar11 = (double)*(float *)(param_9 + 0x4a0);
  }
  dVar10 = (double)(float)dVar10;
  pcVar7 = (char *)(ulong)(uint)(int)sVar2;
  uVar8 = (ulong)(uint)(int)sVar3;
  uVar9 = binbuf_addv((double)(float)dVar1,dVar10,dVar11,param_4,param_5,param_6,param_7,param_8,
                      param_10,0x65e6d1,puVar4,puVar5,pcVar7,uVar8,(double)puVar6);
  binbuf_addv(uVar9,dVar10,dVar11,param_4,param_5,param_6,param_7,param_8,param_10,0x656033,
              extraout_RDX,puVar5,pcVar7,uVar8,in_stack_ffffffffffffff18);
  return;
}


