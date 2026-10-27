// Function : canvas_key
// Namespace: 
// Entry    : 0050d6f0
// Prototype: undefined canvas_key(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, int param_11, uint * param_12, char * param_13, uint * param_14)
// Body     : 0050d6f0 - 0050de76


void canvas_key(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long *param_9,undefined8 param_10,int param_11,uint *param_12,char *param_13,
               uint *param_14)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint *puVar6;
  uint *puVar7;
  char *pcVar8;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  ulong uVar9;
  undefined8 extraout_RDX_01;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  char *pcVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Da_13;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  undefined4 extraout_XMM0_Db_08;
  undefined4 extraout_XMM0_Db_09;
  undefined4 extraout_XMM0_Db_10;
  undefined4 extraout_XMM0_Db_11;
  undefined4 extraout_XMM0_Db_12;
  undefined4 extraout_XMM0_Db_13;
  undefined4 uVar20;
  undefined1 in_stack_ffffffffffffffa8;
  uint local_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined8 *local_30;
  uint switchD_0050d828::switchdataD_0065454c;
  uint switchD_0050d85d::switchdataD_0065453c;
  uint switchD_0050d788::switchdataD_006544d8;
  
  if (param_11 < 3) {
    return;
  }
  pcVar8 = (char *)param_12;
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  *(undefined4 *)(**(long **)(*plVar2 + 0x48) + 0x40) = 0;
  fVar15 = (float)atom_getfloat((int *)param_12);
  fVar16 = (float)atom_getfloat((int *)(param_12 + 8));
  if (param_12[4] == 1) {
    uVar11 = (uint)(float)param_12[6];
    puVar6 = &switchD_0050d788::switchdataD_006544d8;
    switch(uVar11) {
    case 8:
      pcVar13 = "BackSpace";
      break;
    case 9:
      pcVar13 = &DAT_0065474f;
      break;
    case 10:
      pcVar13 = "Return";
      break;
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
switchD_0050d788_caseD_b:
      pcVar13 = (char *)&local_48;
      u8_wc_toutf8_nul((byte *)pcVar13,(uint)(long)(float)param_12[6]);
      break;
    case 0x1b:
      pcVar13 = "Escape";
      break;
    case 0x20:
      pcVar13 = "Space";
      break;
    default:
      puVar6 = (uint *)(ulong)uVar11;
      if (uVar11 != 0x7f) goto switchD_0050d788_caseD_b;
      pcVar13 = "Delete";
    }
LAB_0050d79a:
    puVar3 = gensym(pcVar13);
    uVar11 = param_12[4];
    fVar17 = 0.0;
    pcVar8 = (char *)puVar6;
    if (uVar11 == 1) {
      fVar17 = (float)param_12[6];
      uVar11 = 1;
    }
  }
  else {
    if (param_12[4] != 2) {
      pcVar13 = "?";
      puVar6 = (uint *)pcVar8;
      goto LAB_0050d79a;
    }
    puVar3 = *(undefined8 **)(param_12 + 6);
    fVar17 = 0.0;
    uVar11 = 2;
  }
  uVar14 = (uint)fVar17;
  if (uVar14 == 0xd) {
    uVar14 = 10;
  }
  else if ((uVar14 == 0x7d) || (uVar14 == 0x7b)) {
    post((ulong)(uint)fVar17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
         "keycode %d: dropped");
    return;
  }
  puVar6 = (uint *)pcVar8;
  if ((uVar11 == 2) &&
     (iVar1 = strcmp((char *)**(undefined8 **)(param_12 + 6),"Return"), puVar6 = (uint *)pcVar8,
     iVar1 == 0)) {
    uVar14 = 10;
    goto switchD_0050d828_caseD_f710;
  }
  pcVar13 = "Up";
  puVar7 = &switchD_0050d828::switchdataD_0065454c;
  pcVar8 = (char *)puVar7;
  switch(uVar14) {
  case 0xf700:
    break;
  case 0xf701:
switchD_0050d828_caseD_f701:
    pcVar13 = "Down";
    break;
  case 0xf702:
switchD_0050d828_caseD_f702:
    pcVar13 = "Left";
    break;
  case 0xf703:
switchD_0050d828_caseD_f703:
    pcVar13 = "Right";
    break;
  case 0xf704:
    pcVar13 = "F1";
    break;
  case 0xf705:
    pcVar13 = "F2";
    break;
  case 0xf706:
    pcVar13 = "F3";
    break;
  case 0xf707:
    pcVar13 = "F4";
    break;
  case 0xf708:
    pcVar13 = "F5";
    break;
  case 0xf709:
    pcVar13 = "F6";
    break;
  case 0xf70a:
    pcVar13 = "F7";
    break;
  case 0xf70b:
    pcVar13 = "F8";
    break;
  case 0xf70c:
    pcVar13 = "F9";
    break;
  case 0xf70d:
    pcVar13 = "F10";
    break;
  case 0xf70e:
    pcVar13 = "F11";
    break;
  case 0xf70f:
    pcVar13 = "F12";
    break;
  case 0xf710:
  case 0xf711:
  case 0xf712:
  case 0xf713:
  case 0xf714:
  case 0xf715:
  case 0xf716:
  case 0xf717:
  case 0xf718:
  case 0xf719:
  case 0xf71a:
  case 0xf71b:
  case 0xf71c:
  case 0xf71d:
  case 0xf71e:
  case 0xf71f:
  case 0xf720:
  case 0xf721:
  case 0xf722:
  case 0xf723:
  case 0xf724:
  case 0xf725:
  case 0xf726:
  case 0xf727:
  case 0xf728:
  case 0xf72a:
    goto switchD_0050d828_caseD_f710;
  case 0xf729:
    pcVar13 = "Home";
    break;
  case 0xf72b:
    pcVar13 = "End";
    break;
  case 0xf72c:
    pcVar13 = "Prior";
    break;
  case 0xf72d:
    pcVar13 = "Next";
    break;
  default:
    puVar7 = &switchD_0050d85d::switchdataD_0065453c;
    pcVar8 = (char *)puVar6;
    switch(uVar14) {
    case 0x1c:
      goto switchD_0050d828_caseD_f702;
    case 0x1d:
      goto switchD_0050d828_caseD_f703;
    case 0x1e:
      goto switchD_0050d828_caseD_f700;
    case 0x1f:
      goto switchD_0050d828_caseD_f701;
    }
    goto switchD_0050d828_caseD_f710;
  }
switchD_0050d828_caseD_f700:
  puVar3 = gensym(pcVar13);
  uVar14 = 0;
  pcVar8 = (char *)puVar7;
switchD_0050d828_caseD_f710:
  puVar4 = gensym("#key");
  if ((puVar4[1] != 0) && (fVar15 != 0.0)) {
    puVar4 = gensym("#key");
    pd_float((long *)puVar4[1]);
  }
  puVar4 = gensym("#keyup");
  if ((puVar4[1] != 0) && (fVar15 == 0.0)) {
    puVar4 = gensym("#keyup");
    pd_float((long *)puVar4[1]);
  }
  puVar4 = gensym("#keyname");
  if (puVar4[1] != 0) {
    _local_48 = CONCAT44((int)((ulong)*(undefined8 *)param_12 >> 0x20),1);
    _uStack_40 = CONCAT44((int)((ulong)*(undefined8 *)(param_12 + 2) >> 0x20),
                          (uint)DAT_005d9038 & -(uint)(fVar15 != 0.0));
    local_38 = 2;
    local_30 = puVar3;
    puVar4 = gensym("#keyname");
    pcVar8 = (char *)&local_48;
    puVar4 = (undefined8 *)pd_list((long *)puVar4[1],0,2,pcVar8);
  }
  if (param_9 == (long *)0x0) {
    return;
  }
  lVar10 = param_9[0x18];
  if (lVar10 == 0) {
    return;
  }
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  if (fVar15 == 0.0) goto LAB_0050de25;
  pcVar8 = (char *)(CONCAT71((int7)((ulong)puVar4 >> 8),*(byte *)(lVar10 + 0x88)) & 0xffffff07);
  if ((char)pcVar8 == '\x01') {
    *(byte *)(lVar10 + 0x88) = *(byte *)(lVar10 + 0x88) & 0xf8;
    lVar10 = param_9[0x18];
  }
  if (((*(long *)(lVar10 + 0x30) != 0) && (*(code **)(lVar10 + 0x40) != (code *)0x0)) &&
     (uVar14 != 0)) {
    (**(code **)(lVar10 + 0x40))((float)(int)uVar14,*(long *)(lVar10 + 0x30),puVar3);
    goto LAB_0050de25;
  }
  fVar17 = fVar15;
  if (*(long *)(lVar10 + 0x28) != 0) {
    if (uVar14 == 0) {
      pcVar13 = (char *)*puVar3;
      iVar1 = strcmp(pcVar13,"Home");
      uVar18 = extraout_XMM0_Da_05;
      uVar19 = extraout_XMM0_Db_05;
      if (((iVar1 != 0) &&
          (iVar1 = strcmp(pcVar13,"End"), uVar18 = extraout_XMM0_Da_06, uVar19 = extraout_XMM0_Db_06
          , iVar1 != 0)) &&
         ((iVar1 = strcmp(pcVar13,"Up"), uVar18 = extraout_XMM0_Da_07, uVar19 = extraout_XMM0_Db_07,
          iVar1 != 0 &&
          (((iVar1 = strcmp(pcVar13,"Down"), uVar18 = extraout_XMM0_Da_08,
            uVar19 = extraout_XMM0_Db_08, iVar1 != 0 &&
            (iVar1 = strcmp(pcVar13,"Left"), uVar18 = extraout_XMM0_Da_09,
            uVar19 = extraout_XMM0_Db_09, iVar1 != 0)) &&
           (iVar1 = strcmp(pcVar13,"Right"), uVar18 = extraout_XMM0_Da_10,
           uVar19 = extraout_XMM0_Db_10, iVar1 != 0)))))) goto LAB_0050dcc7;
    }
    if (((*(undefined8 **)(lVar10 + 0x20) != (undefined8 *)0x0) &&
        (plVar2 = (long *)**(undefined8 **)(lVar10 + 0x20), pcVar8 = PTR_canvas_class_00715918,
        *plVar2 == *(long *)PTR_canvas_class_00715918)) &&
       (((*(byte *)(lVar10 + 0x88) & 0x10) == 0 && (uVar14 != 0)))) {
      uVar5 = canvas_undo_confirmdiscard
                        (CONCAT44(uVar19,uVar18),CONCAT44(uVar20,fVar17),param_3,param_4,param_5,
                         param_6,param_7,param_8,plVar2);
      if ((int)uVar5 != 0) {
        return;
      }
      lVar10 = param_9[0x18];
      uVar18 = extraout_XMM0_Da_11;
      uVar19 = extraout_XMM0_Db_11;
    }
    if ((*(byte *)(lVar10 + 0x88) & 0x10) == 0) {
      puVar4 = canvas_undo_set_cut(CONCAT44(uVar19,uVar18),CONCAT44(uVar20,fVar17),param_3,param_4,
                                   param_5,param_6,param_7,param_8,(long)param_9,3);
      pcVar8 = "typing";
      canvas_setundo(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),CONCAT44(uVar20,fVar17),param_3,
                     param_4,param_5,param_6,param_7,param_8,(char *)param_9,
                     PTR_canvas_undo_cut_00715968,(long)puVar4,"typing",param_13,param_14,
                     in_stack_ffffffffffffffa8);
      lVar10 = param_9[0x18];
      uVar18 = extraout_XMM0_Da_00;
      uVar19 = extraout_XMM0_Db_00;
    }
    pcVar13 = (char *)(ulong)uVar14;
    rtext_key(CONCAT44(uVar19,uVar18),CONCAT44(uVar20,fVar17),param_3,param_4,param_5,param_6,
              param_7,param_8,*(long **)(lVar10 + 0x28),uVar14,puVar3,pcVar8,param_13,
              (byte *)param_14);
    if ((*(byte *)(param_9[0x18] + 0x88) & 0x10) != 0) {
      canvas_dirty(DAT_005d9038,CONCAT44(uVar20,fVar17),param_3,param_4,param_5,param_6,param_7,
                   param_8,(long)param_9,pcVar13,extraout_RDX,pcVar8,param_13,param_14);
    }
    goto LAB_0050de25;
  }
  if ((uVar14 == 8) || (uVar14 == 0x7f)) {
    if (*(long *)(lVar10 + 0x20) != 0) {
      canvas_undo_add(0,(ulong)(uint)fVar15,param_3,param_4,param_5,param_6,param_7,param_8,
                      (long)param_9,0xc,"clear",0,param_13,param_14);
      lVar10 = param_9[0x18];
      uVar18 = extraout_XMM0_Da_01;
      uVar19 = extraout_XMM0_Db_01;
    }
    uVar5 = CONCAT44(uVar19,uVar18);
    if ((*(byte *)(lVar10 + 0x88) & 0x20) != 0) {
      uVar5 = canvas_clearline((long)param_9);
      lVar10 = param_9[0x18];
    }
    if (*(long *)(lVar10 + 0x20) == 0) {
      return;
    }
    plVar2 = canvas_undo_set_cut(uVar5,CONCAT44(uVar20,fVar15),param_3,param_4,param_5,param_6,
                                 param_7,param_8,(long)param_9,2);
    pcVar8 = (char *)0x3;
    canvas_undo_add(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),CONCAT44(uVar20,fVar15),
                    param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,3,"clear",plVar2,
                    param_13,param_14);
    canvas_doclear(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),CONCAT44(uVar20,fVar15),param_3
                   ,param_4,param_5,param_6,param_7,param_8,param_9,pcVar8,extraout_RDX_00,plVar2,
                   param_13,(undefined *)param_14);
    canvas_undo_add(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),CONCAT44(uVar20,fVar15),
                    param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,0xd,"clear",0,
                    param_13,param_14);
    return;
  }
  pcVar13 = (char *)*puVar3;
LAB_0050dcc7:
  iVar1 = strcmp(pcVar13,"Up");
  if (iVar1 == 0) {
    uVar11 = (uint)(fVar16 == 0.0) * 9 - 10;
LAB_0050dde4:
    uVar9 = (ulong)uVar11;
    uVar12 = 0;
  }
  else {
    iVar1 = strcmp(pcVar13,"Down");
    if (iVar1 == 0) {
      uVar11 = (uint)(fVar16 != 0.0) * 9 + 1;
      goto LAB_0050dde4;
    }
    iVar1 = strcmp(pcVar13,"Left");
    if (iVar1 == 0) {
      uVar11 = (uint)(fVar16 == 0.0) * 9 - 10;
    }
    else {
      iVar1 = strcmp(pcVar13,"Right");
      if (iVar1 != 0) {
        if ((((*(byte *)(lVar10 + 0x88) & 7) == 2) &&
            (plVar2 = (long *)__tls_get_addr(&PTR_007159b0),
            *(int *)(**(long **)(*plVar2 + 0x48) + 0x90) == 5)) &&
           (iVar1 = strncmp(pcVar13,"Shift",5), iVar1 == 0)) {
          canvas_doconnect(CONCAT44(extraout_XMM0_Db_12,extraout_XMM0_Da_12),
                           (double)CONCAT44(uVar20,fVar17),param_3,param_4,param_5,param_6,param_7,
                           param_8,param_9,*(int *)(lVar10 + 0x98),*(int *)(lVar10 + 0x9c),1,1,
                           param_14);
          pcVar8 = (char *)0x0;
          param_13 = (char *)0x1;
          canvas_doclick(CONCAT44(extraout_XMM0_Db_13,extraout_XMM0_Da_13),CONCAT44(uVar20,fVar17),
                         param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         (ulong)*(uint *)(param_9[0x18] + 0x68),
                         (ulong)*(uint *)(param_9[0x18] + 0x6c),0,(int *)0x1,param_14,
                         in_stack_ffffffffffffffa8);
        }
        goto LAB_0050de25;
      }
      uVar11 = (uint)(fVar16 != 0.0) * 9 + 1;
    }
    uVar12 = (ulong)uVar11;
    uVar9 = 0;
  }
  canvas_displaceselection
            (0,(ulong)(uint)fVar16,param_3,param_4,param_5,param_6,param_7,param_8,param_9,uVar12,
             uVar9,(long *)pcVar8,param_13,param_14);
LAB_0050de25:
  if (((uVar14 == 0) && ((*(byte *)(param_9 + 0x1d) & 0x20) != 0)) &&
     (iVar1 = strncmp((char *)*puVar3,"Control",7), iVar1 == 0)) {
    canvas_setcursor(0,(ulong)(uint)fVar15,param_3,param_4,param_5,param_6,param_7,param_8,
                     (long)param_9,(ulong)(fVar15 == 0.0) << 2,extraout_RDX_01,pcVar8,param_13,
                     param_14,in_stack_ffffffffffffffa8);
  }
  return;
}


