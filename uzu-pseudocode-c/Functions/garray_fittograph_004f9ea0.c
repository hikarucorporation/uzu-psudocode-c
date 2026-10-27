// Function : garray_fittograph
// Namespace: 
// Entry    : 004f9ea0
// Prototype: undefined garray_fittograph(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, ulong param_10, undefined8 param_11, int * param_12, char * param_13, ulong param_14)
// Body     : 004f9ea0 - 004f9f87


void garray_fittograph(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                      ulong param_10,undefined8 param_11,int *param_12,char *param_13,ulong param_14
                      )

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 *puVar5;
  uint uVar6;
  char *pcVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined8 uVar9;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  double dVar10;
  double dVar11;
  double dVar12;
  double in_stack_ffffffffffffffc8;
  int local_30 [2];
  float local_28;
  
  garray_getarray(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                  param_11,param_12,param_13,param_14);
  plVar1 = *(long **)(param_9 + 0x18);
  if ((plVar1[6] == param_9) && (*(long *)(param_9 + 8) == 0)) {
    pcVar4 = (char *)gensym("bounds");
    uVar2 = (uint)param_10;
    uVar6 = uVar2 - 1;
    if ((int)param_11 == 0) {
      uVar6 = uVar2;
    }
    pcVar7 = (char *)(ulong)uVar6;
    if (uVar2 == 1) {
      pcVar7 = (char *)(param_10 & 0xffffffff);
    }
    dVar10 = (double)*(float *)((long)plVar1 + 0x5c);
    dVar11 = (double)(int)pcVar7;
    dVar12 = (double)*(float *)((long)plVar1 + 100);
    uVar9 = pd_vmess(0,dVar10,dVar11,dVar12,param_5,param_6,param_7,param_8,(long)plVar1,pcVar4,
                     0x655b79,pcVar7,param_13,param_14,in_stack_ffffffffffffffc8);
    uVar8 = extraout_RDX;
    if (*(int *)((long)plVar1 + 0x8c) == 2) {
      pcVar4 = "0";
      iVar3 = strcmp((char *)**(undefined8 **)plVar1[0x12],"0");
      uVar9 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      uVar8 = extraout_RDX_00;
      if (iVar3 == 0) {
        local_30[0] = 1;
        local_28 = (float)(int)(uVar2 - 1);
        puVar5 = atom_gensym(local_30);
        pcVar7 = (char *)plVar1[0x12];
        *(undefined8 **)(pcVar7 + 8) = puVar5;
        uVar9 = glist_redraw(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),dVar10,dVar11,dVar12,
                             param_5,param_6,param_7,param_8,plVar1,pcVar4,extraout_RDX_01,pcVar7,
                             param_13,param_14);
        uVar8 = extraout_RDX_02;
      }
    }
    pdgui_stub_deleteforkey
              (uVar9,dVar10,dVar11,dVar12,param_5,param_6,param_7,param_8,(long)plVar1,pcVar4,uVar8,
               (undefined8 *)pcVar7,param_13,param_14);
  }
  return;
}


