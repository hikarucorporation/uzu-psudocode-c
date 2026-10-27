// Function : canvas_motion
// Namespace: 
// Entry    : 0050df20
// Prototype: undefined canvas_motion(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, uint * param_14, undefined1 param_15)
// Body     : 0050df20 - 0050e2ee


void canvas_motion(undefined8 param_1,double param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  char *param_13,uint *param_14,undefined1 param_15)

{
  long lVar1;
  undefined2 uVar2;
  long *plVar3;
  double *pdVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  undefined8 extraout_RDX;
  long lVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  ulong uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  int local_50;
  float local_4c;
  int local_48;
  char local_44 [4];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint switchD_0050dfa5::switchdataD_00654604;
  
  fVar15 = (float)param_3;
  fVar16 = SUB84(param_2,0);
  lVar8 = param_9[0x18];
  if (lVar8 == 0) {
    bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"editor",param_10,param_11,
        param_12,param_13,param_14,param_15);
    return;
  }
  fVar12 = (float)param_1;
  uVar11 = (uint)fVar12;
  uVar10 = (uint)fVar16;
  plVar3 = (long *)__tls_get_addr();
  lVar1 = **(long **)(*plVar3 + 0x48);
  *(long **)(lVar1 + 0x78) = param_9;
  *(uint *)(lVar1 + 0x80) = uVar11;
  *(uint *)(lVar1 + 0x84) = uVar10;
  switch(*(byte *)(lVar8 + 0x88) & 7) {
  case 1:
    pdVar4 = *(double **)(lVar8 + 0x90);
    if (pdVar4 == (double *)0x0) {
      pdVar4 = (double *)clock_new(param_9,delay_move);
      *(double **)(param_9[0x18] + 0x90) = pdVar4;
    }
    clock_unset(pdVar4);
    clock_delay(DAT_006544b0,*(double **)(param_9[0x18] + 0x90));
    goto LAB_0050e03e;
  case 2:
    canvas_doconnect(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     param_9,uVar11,uVar10,(int)fVar15,0,param_14);
LAB_0050e03e:
    lVar8 = param_9[0x18];
    *(uint *)(lVar8 + 0x98) = uVar11;
    *(uint *)(lVar8 + 0x9c) = uVar10;
    break;
  case 3:
    pdgui_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                "crs iiii",param_9,"coords",&DAT_005db3a7,(ulong)*(uint *)(lVar8 + 0x68),
                (char)*(undefined4 *)(lVar8 + 0x6c));
    break;
  case 4:
    pcVar5 = *(code **)(lVar8 + 0x38);
    if (pcVar5 == (code *)0x0) {
      bug(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"e_motionfn",
          param_10,extraout_RDX,&switchD_0050dfa5::switchdataD_00654604,param_13,param_14,
          SUB41(fVar12,0));
      lVar8 = param_9[0x18];
      pcVar5 = *(code **)(lVar8 + 0x38);
    }
    (*pcVar5)(fVar12 - (float)*(int *)(lVar8 + 0x68),fVar16 - (float)*(int *)(lVar8 + 0x6c),0,
              *(undefined8 *)(lVar8 + 0x30));
    lVar8 = param_9[0x18];
    *(uint *)(lVar8 + 0x68) = uVar11;
    *(uint *)(lVar8 + 0x6c) = uVar10;
    break;
  case 5:
    if (*(long **)(lVar8 + 0x28) != (long *)0x0) {
      fVar16 = fVar16 - (float)*(int *)(lVar8 + 0x6c);
      rtext_mouse((ulong)(uint)(float)*(int *)(lVar8 + 0x6c),(ulong)(uint)fVar16,param_3,param_4,
                  param_5,param_6,param_7,param_8,*(long **)(lVar8 + 0x28),
                  (int)(fVar12 - (float)*(int *)(lVar8 + 0x68)),(int)fVar16,2,param_13,
                  (byte *)param_14);
    }
    break;
  case 6:
    local_50 = 0;
    piVar9 = &local_38;
    plVar3 = canvas_findhitbox(param_9,*(int *)(lVar8 + 0x68),*(int *)(lVar8 + 0x6c),&local_50,
                               &local_34,piVar9,&local_3c);
    if (plVar3 == (long *)0x0) break;
    local_4c = (float)local_50;
    plVar6 = pd_checkobject(plVar3);
    uVar14 = extraout_XMM0_Qa_00;
    if (plVar6 == (long *)0x0) {
LAB_0050e24b:
      post(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"not resizable");
    }
    else {
      if (((*(undefined **)(*plVar6 + 0x68) == PTR_text_widgetbehavior_00715630) ||
          ((~*(byte *)((long)plVar6 + 0x2e) & 3) == 0)) ||
         ((plVar7 = pd_checkglist(plVar6), plVar7 != (long *)0x0 &&
          ((*(byte *)((long)plVar6 + 0xe9) & 1) == 0)))) {
        fVar12 = fVar12 - local_4c;
        text_getfont((ulong)(uint)fVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     plVar6,param_9,&local_48,&local_40,local_44,piVar9);
        lVar8 = (long)(int)fVar12 / (long)local_48;
        uVar2 = (undefined2)lVar8;
        if ((int)lVar8 < 2) {
          uVar2 = 1;
        }
        *(undefined2 *)((long)plVar6 + 0x2c) = uVar2;
        uVar13 = gobj_vis(plVar3,param_9,0);
      }
      else {
        uVar14 = extraout_XMM0_Qa_01;
        if (*plVar6 != *(long *)PTR_canvas_class_00715918) goto LAB_0050e24b;
        gobj_vis(plVar3,param_9,0);
        lVar8 = param_9[0x18];
        *(int *)(plVar6 + 10) =
             (int)((float)(int)plVar6[10] + (fVar12 - (float)*(int *)(lVar8 + 0x98)));
        uVar13 = (ulong)(uint)(float)*(int *)(lVar8 + 0x9c);
        fVar16 = fVar16 - (float)*(int *)(lVar8 + 0x9c);
        param_3 = (ulong)(uint)fVar16;
        fVar16 = (float)*(int *)((long)plVar6 + 0x54) + fVar16;
        param_2 = (double)(ulong)(uint)fVar16;
        *(int *)((long)plVar6 + 0x54) = (int)fVar16;
        *(uint *)(lVar8 + 0x98) = uVar11;
        *(uint *)(lVar8 + 0x9c) = uVar10;
      }
      canvas_fixlinesfor(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         (long)param_9,(long)plVar6);
      gobj_vis(plVar3,param_9,1);
    }
    break;
  default:
    canvas_doclick(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                   (ulong)uVar11,(ulong)uVar10,(ulong)(uint)(int)fVar15,(int *)0x0,param_14,
                   SUB41(fVar12,0));
  }
  *(byte *)(param_9[0x18] + 0x88) = *(byte *)(param_9[0x18] + 0x88) | 8;
  return;
}


