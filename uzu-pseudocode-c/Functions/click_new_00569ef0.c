// Function : click_new
// Namespace: 
// Entry    : 00569ef0
// Prototype: long * click_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00569ef0 - 0056a067


long * click_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                char *param_13,undefined8 param_14)

{
  long *plVar1;
  long *plVar2;
  long extraout_RAX;
  undefined8 *puVar3;
  int *piVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 extraout_RDX;
  float fVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar9;
  int in_stack_ffffffffffffffd8;
  
  fVar8 = (float)param_1;
  plVar2 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,click_class,
                  param_10,param_11,param_12,param_13,param_14);
  canvas_getcurrent(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                    param_6,param_7,param_8);
  puVar3 = (undefined8 *)glist_getcanvas(extraout_RAX);
  uVar9 = 0;
  plVar5 = (long *)*puVar3;
  if (fVar8 == 0.0) {
    for (; puVar3[0x1c] == 0; puVar3 = (undefined8 *)puVar3[9]) {
    }
  }
  piVar4 = (int *)gensym("click");
  plVar7 = (long *)0x0;
  class_addmethod(extraout_XMM0_Da_00,CONCAT44(uVar9,fVar8),param_3,param_4,param_5,param_6,param_7,
                  param_8,plVar5,0x56a120,piVar4,0,param_13,param_14,in_stack_ffffffffffffffd8);
  for (plVar5 = s_canvaslist; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[2]) {
    if ((undefined8 *)*plVar5 == puVar3) goto LAB_00569fdc;
  }
  plVar5 = getbytes(0x18);
  *plVar5 = (long)puVar3;
  plVar5[1] = 0;
  plVar5[2] = 0;
  plVar7 = s_canvaslist;
  if (s_canvaslist == (long *)0x0) {
    plVar6 = (long *)&s_canvaslist;
  }
  else {
    do {
      plVar6 = plVar7;
      plVar7 = (long *)plVar6[2];
    } while (plVar7 != (long *)0x0);
    plVar6 = plVar6 + 2;
  }
  plVar7 = (long *)0x0;
  *plVar6 = (long)plVar5;
LAB_00569fdc:
  if ((plVar2 != (long *)0x0) && (plVar5 != (long *)0x0)) {
    plVar6 = (long *)plVar5[1];
    if (plVar6 == (long *)0x0) goto LAB_0056a000;
    plVar1 = (long *)*plVar6;
    while (plVar1 != plVar2) {
LAB_0056a000:
      plVar1 = plVar5;
      if ((plVar6 == (long *)0x0) ||
         (plVar7 = (long *)plVar6[1], plVar1 = plVar6, plVar7 == (long *)0x0)) {
        puVar3 = getbytes(0x10);
        *puVar3 = plVar2;
        puVar3[1] = 0;
        plVar1[1] = (long)puVar3;
        break;
      }
      plVar1 = (long *)*plVar6;
      plVar6 = plVar7;
    }
  }
  plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar5 = outlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_01),CONCAT44(uVar9,fVar8),
                      param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar2,*plVar5 + 0xa8,
                      extraout_RDX,plVar7,param_13,param_14);
  plVar2[6] = (long)plVar5;
  return plVar2;
}


