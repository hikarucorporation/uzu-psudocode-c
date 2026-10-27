// Function : graph_ylabel
// Namespace: 
// Entry    : 00519030
// Prototype: undefined graph_ylabel(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, int * param_12, char * param_13, ulong param_14)
// Body     : 00519030 - 005190e2


void graph_ylabel(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 double param_5,double param_6,double param_7,undefined8 param_8,long *param_9,
                 undefined8 param_10,undefined8 param_11,int *param_12,char *param_13,ulong param_14
                 )

{
  void *pvVar1;
  undefined8 *puVar2;
  int *piVar3;
  int iVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined8 uVar10;
  
  iVar4 = (int)param_11;
  if (iVar4 < 1) {
    pcVar7 = "graph_ylabel: no x value given";
    uVar10 = pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                      "graph_ylabel: no x value given",param_11,param_12,param_13,param_14);
    piVar3 = param_12;
    uVar5 = extraout_RDX_01;
  }
  else {
    piVar3 = param_12;
    iVar9 = atom_getfloat(param_12);
    *(int *)(param_9 + 0x17) = iVar9;
    uVar8 = iVar4 - 1;
    pcVar7 = (char *)((long)(int)param_9[0x15] << 3);
    pvVar1 = resizebytes(CONCAT44(extraout_XMM0_Db,iVar9),param_2,param_3,param_4,param_5,param_6,
                         param_7,param_8,(void *)param_9[0x16],(ulong)pcVar7,(ulong)uVar8 * 8);
    uVar10 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da);
    param_9[0x16] = (long)pvVar1;
    *(uint *)(param_9 + 0x15) = uVar8;
    uVar5 = extraout_RDX;
    if (iVar4 != 1) {
      uVar6 = 0;
      do {
        param_12 = param_12 + 4;
        puVar2 = atom_gensym(param_12);
        uVar10 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_00);
        piVar3 = (int *)param_9[0x16];
        *(undefined8 **)(piVar3 + uVar6 * 2) = puVar2;
        uVar6 = uVar6 + 1;
        uVar5 = extraout_RDX_00;
      } while (uVar8 != uVar6);
    }
  }
  glist_redraw(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar7,uVar5,
               (char *)piVar3,param_13,param_14);
  return;
}


