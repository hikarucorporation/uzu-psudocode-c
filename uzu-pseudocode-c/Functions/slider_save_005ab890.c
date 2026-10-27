// Function : slider_save
// Namespace: 
// Entry    : 005ab890
// Prototype: undefined slider_save(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, int * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005ab890 - 005abab3


void slider_save(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,int *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
                undefined8 param_14)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_RDX;
  char *pcVar7;
  ulong uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 local_68 [4];
  undefined8 local_48 [3];
  
  iemgui_save(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,local_68,
              local_48,param_12,param_13,param_14);
  puVar4 = gensym("#X");
  puVar5 = gensym("obj");
  uVar2 = (uint)*(short *)(param_9 + 0x28);
  uVar3 = (uint)*(short *)(param_9 + 0x2a);
  pcVar7 = "vsl";
  if (*(int *)(param_9 + 0x4bc) == 0) {
    pcVar7 = "hsl";
  }
  puVar6 = gensym(pcVar7);
  dVar1 = *(double *)(param_9 + 0x4a0);
  dVar10 = *(double *)(param_9 + 0x4a8);
  iem_symargstoint((uint *)(param_9 + 0x448));
  iem_fstyletoint((uint *)(param_9 + 0x440));
  dVar10 = (double)(float)dVar10;
  pcVar7 = (char *)(ulong)uVar2;
  uVar8 = (ulong)uVar3;
  uVar9 = binbuf_addv((double)(float)dVar1,dVar10,param_3,param_4,param_5,param_6,param_7,param_8,
                      param_10,0x65e826,puVar4,puVar5,pcVar7,uVar8,(double)puVar6);
  binbuf_addv(uVar9,dVar10,param_3,param_4,param_5,param_6,param_7,param_8,param_10,0x656033,
              extraout_RDX,puVar5,pcVar7,uVar8,(double)CONCAT44(uVar2,uVar3));
  return;
}


