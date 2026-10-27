// Function : canvas_dataproperties
// Namespace: 
// Entry    : 0051be50
// Prototype: undefined canvas_dataproperties(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, long * param_10, undefined4 * param_11, long * param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 0051be50 - 0051c06e


void canvas_dataproperties
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long *param_9,long *param_10,undefined4 *param_11,long *param_12,char *param_13,
               undefined8 param_14,undefined1 param_15)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  int iVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 extraout_XMM0_Qa;
  
  uVar12 = glist_noselect(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                          param_10,param_11,param_12,param_13,param_14);
  plVar4 = (long *)param_9[6];
  uVar13 = extraout_RDX;
  if (plVar4 != (long *)0x0) {
    iVar7 = -1;
    plVar10 = (long *)0x0;
    iVar8 = -1;
    do {
      iVar7 = iVar7 + 1;
      if (plVar4 == param_10) {
        plVar10 = plVar4;
        iVar8 = iVar7;
      }
      plVar4 = (long *)plVar4[1];
    } while (plVar4 != (long *)0x0);
    if (iVar8 != -1) {
      if (param_11 == (undefined4 *)0x0) {
        pcVar11 = "couldn\'t update properties (none given)";
      }
      else {
        param_12 = (long *)0x0;
        uVar12 = glist_readfrombinbuf
                           (uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                            param_11,"properties dialog",(char *)0x0,param_13,param_14);
        plVar4 = (long *)param_9[6];
        plVar1 = (long *)plVar4[1];
        if (plVar1 != (long *)0x0) {
          for (; iVar7 != 0; iVar7 = iVar7 + -1) {
            if ((long *)plVar1[1] == (long *)0x0) goto LAB_0051bf8d;
            plVar4 = plVar1;
            plVar1 = (long *)plVar1[1];
          }
          plVar9 = param_9;
          uVar13 = gobj_vis(plVar1,param_9,0);
          plVar4[1] = plVar1[1];
          if (plVar10 == (long *)0x0) {
            pcVar11 = "data_properties: couldn\'t find old element";
            uVar12 = extraout_RDX_01;
LAB_0051bfb0:
            bug(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar11,plVar9,uVar12
                ,param_12,param_13,param_14,param_15);
            return;
          }
          param_12 = (long *)PTR_scalar_class_00715810;
          uVar12 = extraout_RDX_01;
          if ((((*plVar1 == *(long *)PTR_scalar_class_00715810) && (*plVar10 == *plVar1)) &&
              (plVar1[2] == plVar10[2])) &&
             (lVar5 = template_findbyname(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,
                                          param_8,plVar1[2]), uVar12 = extraout_RDX_03,
             uVar13 = extraout_XMM0_Qa, lVar5 != 0)) {
            if (0 < *(int *)(lVar5 + 0x18)) {
              lVar6 = 0;
              do {
                lVar2 = plVar1[lVar6 + 3];
                plVar1[lVar6 + 3] = plVar10[lVar6 + 3];
                plVar10[lVar6 + 3] = lVar2;
                lVar6 = lVar6 + 1;
              } while (lVar6 < *(int *)(lVar5 + 0x18));
            }
            pd_free(plVar1);
            uVar3 = glist_isvisible((long)param_9);
            if (uVar3 != 0) {
              gobj_vis(plVar10,param_9,0);
              gobj_vis(plVar10,param_9,1);
              return;
            }
          }
          else {
            uVar13 = glist_delete(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                  param_9,plVar10,uVar12,param_12,param_13,param_14);
            lVar5 = param_9[6];
            if (iVar8 < 1) {
              plVar1[1] = lVar5;
              param_9[6] = (long)plVar1;
            }
            else {
              if (lVar5 == 0) {
                pcVar11 = "data_properties: can\'t reinsert";
                uVar12 = extraout_RDX_02;
                plVar9 = plVar10;
                goto LAB_0051bfb0;
              }
              if (iVar8 == 1) {
              }
              else {
                iVar8 = iVar8 + -1;
                lVar6 = 0;
                do {
                  lVar2 = *(long *)(lVar5 + 8);
                  if (lVar2 == 0) goto LAB_0051bfe2;
                  iVar8 = iVar8 + -1;
                  lVar5 = lVar2;
                } while (iVar8 != 0);
              }
              lVar6 = *(long *)(lVar5 + 8);
LAB_0051bfe2:
              plVar1[1] = lVar6;
              *(long **)(lVar5 + 8) = plVar1;
            }
          }
          return;
        }
LAB_0051bf8d:
        pcVar11 = "couldn\'t update properties (perhaps a format problem?)";
        uVar13 = extraout_RDX_00;
      }
      goto LAB_0051bf6c;
    }
  }
  pcVar11 = "data_properties: scalar disappeared";
LAB_0051bf6c:
  pd_error(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,pcVar11,
           uVar13,param_12,param_13,param_14);
  return;
}


