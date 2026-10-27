// Function : canvas_reselect
// Namespace: 
// Entry    : 005103f0
// Prototype: undefined canvas_reselect(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9)
// Body     : 005103f0 - 0051065c


void canvas_reselect(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long *param_9)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  long *plVar7;
  undefined8 *puVar8;
  char *pcVar9;
  char *in_R8;
  char *in_R9;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined1 uVar11;
  char *in_stack_ffffffffffffff48;
  char local_a8 [136];
  
  puVar5 = *(undefined8 **)(param_9[0x18] + 0x20);
  if (*(long *)(param_9[0x18] + 0x28) == 0) {
    if ((puVar5 != (undefined8 *)0x0) && (puVar5[1] == 0)) {
      gobj_activate((long *)*puVar5);
      return;
    }
  }
  else {
    plVar1 = (long *)*puVar5;
    if ((plVar1 != (long *)0x0) && (puVar5[1] == 0)) {
      pcVar9 = (char *)plVar1;
      canvas_getindex((long)param_9,(long)plVar1);
      lVar4 = param_9[0x18];
      if (lVar4 != 0) {
        puVar5 = *(undefined8 **)(lVar4 + 0x20);
        uVar2 = extraout_RDX;
        uVar10 = extraout_XMM0_Qa;
        while (puVar5 != (undefined8 *)0x0) {
          pcVar9 = (char *)*puVar5;
          uVar10 = glist_deselect(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                  param_9,(long *)pcVar9,uVar2,puVar5,in_R8,in_R9);
          lVar4 = param_9[0x18];
          uVar2 = extraout_RDX_00;
          puVar5 = *(undefined8 **)(lVar4 + 0x20);
        }
        if ((*(byte *)(lVar4 + 0x88) & 0x20) != 0) {
          *(byte *)(lVar4 + 0x88) = *(byte *)(lVar4 + 0x88) & 0xdf;
          in_R8 = local_a8;
          sprintf(in_R8,"l%p",*(undefined8 *)(param_9[0x18] + 0x80));
          in_stack_ffffffffffffff48 = "black";
          pcVar9 = "crs rs";
          in_R9 = "-fill";
          pdgui_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                      "crs rs",param_9,"itemconfigure",in_R8,"-fill",0x51);
        }
      }
      uVar11 = SUB81(in_stack_ffffffffffffff48,0);
      plVar7 = (long *)param_9[6];
      if (plVar7 != (long *)0x0) {
        plVar3 = plVar7;
        do {
          if (plVar3 == plVar1) {
            if (param_9[0x18] == 0) {
              return;
            }
            puVar6 = getbytes(0x10);
            lVar4 = param_9[0x18];
            puVar5 = *(undefined8 **)(lVar4 + 0x20);
            if (puVar5 == (undefined8 *)0x0) {
              puVar5 = (undefined8 *)0x0;
              goto LAB_0051063d;
            }
            puVar8 = puVar5;
            goto LAB_00510610;
          }
          plVar3 = (long *)plVar3[1];
        } while (plVar3 != (long *)0x0);
        while (plVar1 = plVar7, plVar1 != (long *)0x0) {
          plVar7 = (long *)plVar1[1];
          if ((long *)plVar1[1] == (long *)0x0) {
            if (param_9[0x18] == 0) {
              return;
            }
            puVar5 = getbytes(0x10);
            lVar4 = param_9[0x18];
            plVar3 = *(long **)(lVar4 + 0x20);
            plVar7 = plVar3;
            if (plVar3 == (long *)0x0) {
              plVar3 = (long *)0x0;
            }
            else {
              do {
                if ((long *)*plVar7 == plVar1) {
                  bug(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      "glist_select",pcVar9,plVar7,plVar3,in_R8,in_R9,
                      (char)in_stack_ffffffffffffff48);
                  lVar4 = param_9[0x18];
                  plVar3 = *(long **)(lVar4 + 0x20);
                  break;
                }
                plVar7 = (long *)plVar7[1];
              } while (plVar7 != (long *)0x0);
            }
            puVar5[1] = plVar3;
            *puVar5 = plVar1;
            *(undefined8 **)(lVar4 + 0x20) = puVar5;
            pcVar9 = (char *)param_9;
            gobj_select(plVar1,(long)param_9);
            plVar7 = (long *)plVar1[1];
          }
        }
      }
    }
  }
  return;
  while (puVar8 = (undefined8 *)puVar8[1], puVar8 != (undefined8 *)0x0) {
LAB_00510610:
    if ((long *)*puVar8 == plVar1) {
      bug(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"glist_select"
          ,pcVar9,puVar8,puVar5,in_R8,in_R9,uVar11);
      lVar4 = param_9[0x18];
      puVar5 = *(undefined8 **)(lVar4 + 0x20);
      break;
    }
  }
LAB_0051063d:
  puVar6[1] = puVar5;
  *puVar6 = plVar1;
  *(undefined8 **)(lVar4 + 0x20) = puVar6;
  gobj_select(plVar1,(long)param_9);
  return;
}


