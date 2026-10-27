// Function : radio_save
// Namespace: 
// Entry    : 005a8050
// Prototype: undefined radio_save(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, int * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005a8050 - 005a823f


void radio_save(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,int *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
               undefined8 param_14)

{
  short sVar1;
  short sVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 extraout_RDX;
  char *pcVar7;
  ulong uVar8;
  bool bVar9;
  double dVar10;
  undefined8 uVar11;
  double in_stack_ffffffffffffff28;
  undefined8 local_68 [4];
  undefined8 local_48 [3];
  
  bVar9 = *(int *)(param_9 + 0x4ac) == 0;
  pcVar6 = "hdl";
  if (bVar9) {
    pcVar6 = "hradio";
  }
  pcVar7 = "vdl";
  if (bVar9) {
    pcVar7 = "vradio";
  }
  if (*(int *)(param_9 + 0x4a8) == 0) {
    pcVar7 = pcVar6;
  }
  iemgui_save(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,local_68,
              local_48,pcVar6,param_13,param_14);
  puVar3 = gensym("#X");
  puVar4 = gensym("obj");
  sVar1 = *(short *)(param_9 + 0x28);
  sVar2 = *(short *)(param_9 + 0x2a);
  puVar5 = gensym(pcVar7);
  iem_symargstoint((uint *)(param_9 + 0x448));
  iem_fstyletoint((uint *)(param_9 + 0x440));
  dVar10 = 0.0;
  if ((*(byte *)(param_9 + 0x448) & 1) != 0) {
    dVar10 = (double)*(float *)(param_9 + 0x4a4);
  }
  pcVar6 = (char *)(ulong)(uint)(int)sVar1;
  uVar8 = (ulong)(uint)(int)sVar2;
  uVar11 = binbuf_addv(dVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                       0x65e747,puVar3,puVar4,pcVar6,uVar8,(double)puVar5);
  binbuf_addv(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,0x656033,
              extraout_RDX,puVar4,pcVar6,uVar8,in_stack_ffffffffffffff28);
  return;
}


