// Function : glist_doredrawfortemplate
// Namespace: 
// Entry    : 00500670
// Prototype: undefined glist_doredrawfortemplate(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, long param_10, int param_11)
// Body     : 00500670 - 005008fc


void glist_doredrawfortemplate
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long *param_9,long param_10,int param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long *plVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar7;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  
  if ((*(byte *)(param_9 + 0x1d) & 8) == 0) {
    lVar4 = glist_getcanvas((long)param_9);
    puVar2 = PTR_canvas_class_00715918;
    puVar1 = PTR_scalar_class_00715810;
    plVar6 = (long *)param_9[6];
    if (plVar6 == (long *)0x0) {
      return;
    }
    param_1 = extraout_XMM0_Qa;
    if ((*(byte *)(lVar4 + 0xe8) & 2) != 0) {
      uVar7 = extraout_XMM0_Qa;
      if (param_11 == 1) {
        do {
          if (*plVar6 == *(long *)puVar1) {
            uVar5 = template_usestemplate
                              (uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               plVar6[2],param_10);
            uVar7 = extraout_XMM0_Qa_03;
            if ((int)uVar5 == 0) {
              if (*plVar6 == *(long *)puVar2) goto LAB_005007fc;
            }
            else if (((((*(byte *)(param_9 + 0x1d) & 8) == 0) &&
                      (lVar4 = glist_getcanvas((long)param_9), uVar7 = extraout_XMM0_Qa_04,
                      (*(byte *)(lVar4 + 0xe8) & 2) != 0)) && (*(long *)(*plVar6 + 0x68) != 0)) &&
                    ((*(long *)(*(long *)(*plVar6 + 0x68) + 0x28) != 0 &&
                     (bVar3 = gobj_shouldvis(plVar6,param_9), uVar7 = extraout_XMM0_Qa_05,
                     (int)CONCAT71(extraout_var_00,bVar3) != 0)))) {
              uVar7 = (**(code **)(*(long *)(*plVar6 + 0x68) + 0x28))(plVar6,param_9,1);
            }
          }
          else if (*plVar6 == *(long *)puVar2) {
LAB_005007fc:
            uVar7 = glist_doredrawfortemplate
                              (uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar6,
                               param_10,1);
          }
          plVar6 = (long *)plVar6[1];
          if (plVar6 == (long *)0x0) {
            return;
          }
        } while( true );
      }
      if (param_11 != 2) {
        do {
          if (*plVar6 == *(long *)puVar1) {
            uVar7 = template_usestemplate
                              (uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               plVar6[2],param_10);
            if ((int)uVar7 == 0) {
              uVar7 = extraout_XMM0_Qa_06;
              if (*plVar6 == *(long *)puVar2) goto LAB_005008d3;
            }
            else {
              uVar7 = scalar_redraw((long)plVar6,(long)param_9);
            }
          }
          else if (*plVar6 == *(long *)puVar2) {
LAB_005008d3:
            uVar7 = glist_doredrawfortemplate
                              (uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar6,
                               param_10,param_11);
          }
          plVar6 = (long *)plVar6[1];
          if (plVar6 == (long *)0x0) {
            return;
          }
        } while( true );
      }
      do {
        if (*plVar6 == *(long *)puVar1) {
          uVar5 = template_usestemplate
                            (uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar6[2]
                             ,param_10);
          uVar7 = extraout_XMM0_Qa_00;
          if ((int)uVar5 == 0) {
            if (*plVar6 == *(long *)puVar2) goto LAB_005006fc;
          }
          else if ((((*(byte *)(param_9 + 0x1d) & 8) == 0) &&
                   (lVar4 = glist_getcanvas((long)param_9), uVar7 = extraout_XMM0_Qa_01,
                   (*(byte *)(lVar4 + 0xe8) & 2) != 0)) &&
                  ((*(long *)(*plVar6 + 0x68) != 0 &&
                   ((*(long *)(*(long *)(*plVar6 + 0x68) + 0x28) != 0 &&
                    (bVar3 = gobj_shouldvis(plVar6,param_9), uVar7 = extraout_XMM0_Qa_02,
                    (int)CONCAT71(extraout_var,bVar3) != 0)))))) {
            uVar7 = (**(code **)(*(long *)(*plVar6 + 0x68) + 0x28))(plVar6,param_9,0);
          }
        }
        else if (*plVar6 == *(long *)puVar2) {
LAB_005006fc:
          uVar7 = glist_doredrawfortemplate
                            (uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar6,
                             param_10,2);
        }
        plVar6 = (long *)plVar6[1];
        if (plVar6 == (long *)0x0) {
          return;
        }
      } while( true );
    }
  }
  else {
    plVar6 = (long *)param_9[6];
    if (plVar6 == (long *)0x0) {
      return;
    }
  }
  puVar1 = PTR_canvas_class_00715918;
  lVar4 = *(long *)PTR_canvas_class_00715918;
  do {
    if (*plVar6 == lVar4) {
      param_1 = glist_doredrawfortemplate
                          (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar6,
                           param_10,param_11);
      lVar4 = *(long *)puVar1;
    }
    plVar6 = (long *)plVar6[1];
  } while (plVar6 != (long *)0x0);
  return;
}


