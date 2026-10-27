// Function : toggle_save
// Namespace: 
// Entry    : 005ada80
// Prototype: undefined toggle_save(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, int * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005ada80 - 005adc1f


void toggle_save(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,int *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
                undefined8 param_14)

{
  short sVar1;
  short sVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 extraout_RDX;
  char *pcVar6;
  ulong uVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double in_stack_ffffffffffffff38;
  undefined8 local_68 [4];
  undefined8 local_48 [3];
  
  iemgui_save(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,local_68,
              local_48,param_12,param_13,param_14);
  puVar3 = gensym("#X");
  puVar4 = gensym("obj");
  sVar1 = *(short *)(param_9 + 0x28);
  sVar2 = *(short *)(param_9 + 0x2a);
  puVar5 = gensym("tgl");
  iem_symargstoint((uint *)(param_9 + 0x448));
  iem_fstyletoint((uint *)(param_9 + 0x440));
  dVar8 = 0.0;
  if ((*(byte *)(param_9 + 0x448) & 1) != 0) {
    dVar8 = (double)*(float *)(param_9 + 0x490);
  }
  dVar10 = (double)*(float *)(param_9 + 0x494);
  pcVar6 = (char *)(ulong)(uint)(int)sVar1;
  uVar7 = (ulong)(uint)(int)sVar2;
  uVar9 = binbuf_addv(dVar8,dVar10,param_3,param_4,param_5,param_6,param_7,param_8,param_10,0x65e850
                      ,puVar3,puVar4,pcVar6,uVar7,(double)puVar5);
  binbuf_addv(uVar9,dVar10,param_3,param_4,param_5,param_6,param_7,param_8,param_10,0x656033,
              extraout_RDX,puVar4,pcVar6,uVar7,in_stack_ffffffffffffff38);
  return;
}


