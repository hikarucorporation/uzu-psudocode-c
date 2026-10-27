// Function : my_canvas_save
// Namespace: 
// Entry    : 005a3e40
// Prototype: undefined my_canvas_save(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, int * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005a3e40 - 005a4005


void my_canvas_save(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,int *param_10,undefined8 param_11,undefined8 param_12,char *param_13
                   ,undefined8 param_14)

{
  short sVar1;
  short sVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 extraout_RDX;
  char *pcVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 local_68 [4];
  undefined8 local_48 [3];
  
  iemgui_save(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,local_68,
              local_48,param_12,param_13,param_14);
  puVar3 = gensym("#X");
  puVar4 = gensym("obj");
  sVar1 = *(short *)(param_9 + 0x28);
  sVar2 = *(short *)(param_9 + 0x2a);
  puVar5 = gensym("cnv");
  iem_fstyletoint((uint *)(param_9 + 0x440));
  iem_symargstoint((uint *)(param_9 + 0x448));
  pcVar6 = (char *)(ulong)(uint)(int)sVar1;
  uVar7 = (ulong)(uint)(int)sVar2;
  uVar8 = binbuf_addv(local_68[0],param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                      0x65e5f7,puVar3,puVar4,pcVar6,uVar7,(double)puVar5);
  binbuf_addv(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,0x656033,
              extraout_RDX,puVar4,pcVar6,uVar7,(double)puVar5);
  return;
}


