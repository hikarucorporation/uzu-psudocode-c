// Function : canvas_undo_canvas_apply
// Namespace: 
// Entry    : 005095f0
// Prototype: undefined8 canvas_undo_canvas_apply(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9, long * param_10, int param_11, undefined8 param_12, undefined8 param_13, undefined * param_14)
// Body     : 005095f0 - 00509843


undefined8
canvas_undo_canvas_apply
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          double param_5,double param_6,double param_7,undefined8 param_8,long *param_9,
          long *param_10,int param_11,undefined8 param_12,undefined8 param_13,undefined *param_14)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ushort uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ushort uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  byte bVar14;
  ulong uVar15;
  char *pcVar16;
  byte bVar17;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  long *plVar18;
  undefined1 uVar19;
  byte bVar20;
  char *__s;
  char *pcVar21;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined8 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined8 in_stack_ffffffffffffff58;
  char local_98 [136];
  
  if (param_11 - 1U < 2) {
    uVar3 = *(ushort *)(param_9 + 0x1d);
    pcVar21 = param_14;
    if ((uVar3 & 0x20) == 0) {
      canvas_editmode(DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      (ulong)param_9);
      uVar3 = *(ushort *)(param_9 + 0x1d);
      pcVar21 = param_14;
    }
    lVar4 = param_9[10];
    lVar7 = param_9[0xb];
    lVar8 = param_9[0xc];
    auVar1 = *(undefined1 (*) [16])(param_9 + 0xd);
    uVar23 = auVar1._0_4_;
    uVar24 = auVar1._4_4_;
    lVar5 = param_9[0xf];
    uVar19 = (undefined1)(uVar3 >> 7);
    bVar14 = (byte)(uVar3 >> 8);
    uVar15 = (ulong)CONCAT11(bVar14 >> 7,uVar19) & 0xffffffffffffff02;
    bVar20 = (byte)uVar15 | (byte)uVar3 >> 7;
    __s = (char *)CONCAT71((int7)(uVar15 >> 8),bVar20);
    *(int *)(param_9 + 10) = (int)*param_10;
    *(undefined4 *)((long)param_9 + 0x54) = *(undefined4 *)((long)param_10 + 4);
    lVar9 = param_10[2];
    param_9[0xb] = param_10[1];
    param_9[0xc] = lVar9;
    auVar2 = *(undefined1 (*) [16])(param_10 + 3);
    uVar25 = auVar2._0_4_;
    uVar26 = auVar2._4_4_;
    *(undefined1 (*) [16])(param_9 + 0xd) = auVar2;
    *(int *)(param_9 + 0xf) = (int)param_10[5];
    *(undefined4 *)((long)param_9 + 0x7c) = *(undefined4 *)((long)param_10 + 0x2c);
    bVar17 = (char)param_10[6] << 7;
    *(ushort *)(param_9 + 0x1d) = uVar3 & 0xff7f | (ushort)bVar17;
    uVar10 = (ushort)((*(uint *)(param_10 + 6) & 2) << 7);
    *(ushort *)(param_9 + 0x1d) = uVar3 & 0xfe7f | (ushort)bVar17 | uVar10;
    *(ushort *)(param_9 + 0x1d) =
         uVar3 & 0xfc7f | (ushort)bVar17 | uVar10 | (ushort)((*(uint *)(param_10 + 6) & 4) << 7);
    *param_10 = lVar4;
    param_10[1] = lVar7;
    param_10[2] = lVar8;
    *(undefined1 (*) [16])(param_10 + 3) = auVar1;
    param_10[5] = lVar5;
    uVar15 = (ulong)CONCAT11(bVar14 >> 7,uVar19) & 0xffffffffffffff04;
    bVar14 = (byte)uVar15 | bVar20 | *(byte *)(param_10 + 6) & 0xf8;
    pcVar16 = (char *)CONCAT71((int7)(uVar15 >> 8),bVar14);
    *(byte *)(param_10 + 6) = bVar14;
    plVar18 = (long *)(ulong)(*(byte *)((long)param_9 + 0xe9) & 3);
    canvas_setgraph(lVar7,auVar1._0_8_,auVar2._0_8_,param_4,param_5,param_6,param_7,param_8,param_9,
                    plVar18,0,pcVar16,__s,(ulong)pcVar21);
    canvas_dirty(DAT_005d9038,CONCAT44(uVar24,uVar23),CONCAT44(uVar26,uVar25),param_4,param_5,
                 param_6,param_7,param_8,(long)param_9,(char *)plVar18,extraout_RDX,pcVar16,__s,
                 pcVar21);
    if ((*(byte *)(param_9 + 0x1d) & 1) != 0) {
      canvas_redraw(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),CONCAT44(uVar24,uVar23),
                    CONCAT44(uVar26,uVar25),param_4,param_5,param_6,param_7,param_8,param_9,
                    (char *)plVar18,extraout_RDX_00,pcVar16,__s,pcVar21,
                    (char)in_stack_ffffffffffffff58);
    }
    if (((param_9[9] != 0) && ((*(byte *)((long)param_9 + 0xe9) & 8) == 0)) &&
       (uVar13 = glist_isvisible(param_9[9]), uVar19 = (undefined1)in_stack_ffffffffffffff58,
       uVar13 != 0)) {
      lVar4 = param_9[0x18];
      if (lVar4 != 0) {
        puVar6 = *(undefined8 **)(lVar4 + 0x20);
        uVar22 = extraout_RDX_01;
        uVar11 = extraout_XMM0_Da_00;
        uVar12 = extraout_XMM0_Db_00;
        while (uVar19 = (undefined1)in_stack_ffffffffffffff58, puVar6 != (undefined8 *)0x0) {
          glist_deselect(CONCAT44(uVar12,uVar11),CONCAT44(uVar24,uVar23),CONCAT44(uVar26,uVar25),
                         param_4,param_5,param_6,param_7,param_8,param_9,(long *)*puVar6,uVar22,
                         puVar6,__s,pcVar21);
          lVar4 = param_9[0x18];
          uVar22 = extraout_RDX_02;
          uVar11 = extraout_XMM0_Da_01;
          uVar12 = extraout_XMM0_Db_01;
          puVar6 = *(undefined8 **)(lVar4 + 0x20);
        }
        bVar14 = *(byte *)(lVar4 + 0x88);
        pcVar16 = (char *)(ulong)bVar14;
        if ((bVar14 & 0x20) != 0) {
          *(byte *)(lVar4 + 0x88) = bVar14 & 0xdf;
          __s = local_98;
          sprintf(__s,"l%p",*(undefined8 *)(param_9[0x18] + 0x80));
          uVar19 = 0x51;
          pcVar16 = "itemconfigure";
          pcVar21 = "-fill";
          pdgui_vmess(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),CONCAT44(uVar24,uVar23),
                      CONCAT44(uVar26,uVar25),param_4,param_5,param_6,param_7,param_8,0,"crs rs",
                      param_9,"itemconfigure",__s,"-fill",0x51);
        }
      }
      gobj_vis(param_9,(long *)param_9[9],0);
      plVar18 = (long *)param_9[9];
      uVar22 = gobj_vis(param_9,plVar18,1);
      if ((*(byte *)((long *)param_9[9] + 0x1d) & 1) != 0) {
        canvas_redraw(uVar22,CONCAT44(uVar24,uVar23),CONCAT44(uVar26,uVar25),param_4,param_5,param_6
                      ,param_7,param_8,(long *)param_9[9],(char *)plVar18,extraout_RDX_03,pcVar16,
                      __s,pcVar21,uVar19);
      }
    }
  }
  else if ((param_10 != (long *)0x0) && (param_11 == 0)) {
    freebytes(param_10);
  }
  return 1;
}


