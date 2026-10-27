// Function : canvas_setgraph
// Namespace: 
// Entry    : 00509850
// Prototype: undefined canvas_setgraph(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9, long * param_10, int param_11, undefined8 param_12, char * param_13, ulong param_14)
// Body     : 00509850 - 00509996


void canvas_setgraph(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    double param_5,double param_6,double param_7,undefined8 param_8,long *param_9,
                    long *param_10,int param_11,undefined8 param_12,char *param_13,ulong param_14)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined7 extraout_var;
  uint uVar4;
  char *pcVar5;
  undefined8 extraout_RDX;
  bool bVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar7;
  
  uVar4 = (uint)param_10;
  if ((param_9[9] == 0) || ((*(ushort *)(param_9 + 0x1d) & 0x808) != 0)) {
    bVar6 = false;
  }
  else {
    uVar3 = glist_isvisible(param_9[9]);
    bVar6 = uVar3 != 0;
  }
  if (uVar4 == 0) {
    bVar2 = glist_isgraph((long)param_9);
    if ((int)CONCAT71(extraout_var,bVar2) != 0) {
      if (bVar6) {
        gobj_vis(param_9,(long *)param_9[9],0);
        *(byte *)((long)param_9 + 0xe9) = *(byte *)((long)param_9 + 0xe9) & 0xfc;
        goto LAB_00509938;
      }
      *(byte *)((long)param_9 + 0xe9) = *(byte *)((long)param_9 + 0xe9) & 0xfc;
    }
  }
  else {
    if ((int)param_9[10] < 1) {
      *(undefined4 *)(param_9 + 10) = 200;
      iVar1 = *(int *)((long)param_9 + 0x54);
    }
    else {
      iVar1 = *(int *)((long)param_9 + 0x54);
    }
    if (iVar1 < 1) {
      *(undefined4 *)((long)param_9 + 0x54) = 0x8c;
    }
    if (bVar6) {
      param_10 = (long *)param_9[9];
      gobj_vis(param_9,param_10,0);
    }
    uVar4 = (uint)(param_11 == 0) << 7 | (uVar4 & 2) << 8;
    pcVar5 = (char *)(ulong)uVar4;
    *(ushort *)(param_9 + 0x1d) = ((ushort)param_9[0x1d] & 0xfc7f) + (short)uVar4 + 0x100;
    uVar4 = glist_isvisible((long)param_9);
    if ((uVar4 != 0) && ((*(byte *)(param_9 + 0x1d) & 0x80) != 0)) {
      glist_redraw(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                   param_10,extraout_RDX,pcVar5,param_13,param_14);
    }
    if (bVar6) {
LAB_00509938:
      uVar7 = gobj_vis(param_9,(long *)param_9[9],1);
      canvas_fixlinesfor(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9[9],
                         (long)param_9);
      return;
    }
  }
  return;
}


