// Function : canvas_selectinrect
// Namespace: 
// Entry    : 0050cb90
// Prototype: undefined canvas_selectinrect(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, int param_10, int param_11, int param_12, int param_13)
// Body     : 0050cb90 - 0050ccbf


void canvas_selectinrect(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,long param_9,int param_10,int param_11,int param_12,int param_13)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  int *piVar9;
  undefined8 extraout_XMM0_Qa;
  undefined1 in_stack_ffffffffffffffb8;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  plVar6 = *(long **)(param_9 + 0x30);
  if (plVar6 != (long *)0x0) {
    do {
      piVar8 = &local_3c;
      piVar9 = &local_40;
      lVar7 = param_9;
      gobj_getrect(plVar6,param_9,&local_34,&local_38,piVar8,piVar9);
      if ((((local_34 <= param_12) && (param_10 <= local_3c)) && (local_38 <= param_13)) &&
         ((param_11 <= local_40 && (*(long *)(param_9 + 0xc0) != 0)))) {
        for (plVar4 = *(long **)(*(long *)(param_9 + 0xc0) + 0x20); plVar4 != (long *)0x0;
            plVar4 = (long *)plVar4[1]) {
          if ((long *)*plVar4 == plVar6) goto LAB_0050cbe2;
        }
        puVar3 = getbytes(0x10);
        lVar2 = *(long *)(param_9 + 0xc0);
        plVar4 = *(long **)(lVar2 + 0x20);
        plVar5 = plVar4;
        if (plVar4 == (long *)0x0) {
          plVar4 = (long *)0x0;
        }
        else {
          do {
            if ((long *)*plVar5 == plVar6) {
              bug(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  "glist_select",lVar7,plVar5,plVar4,(char *)piVar8,piVar9,in_stack_ffffffffffffffb8
                 );
              lVar2 = *(long *)(param_9 + 0xc0);
              plVar4 = *(long **)(lVar2 + 0x20);
              break;
            }
            plVar1 = plVar5 + 1;
            plVar5 = (long *)*plVar1;
          } while ((long *)*plVar1 != (long *)0x0);
        }
        puVar3[1] = plVar4;
        *puVar3 = plVar6;
        *(undefined8 **)(lVar2 + 0x20) = puVar3;
        gobj_select(plVar6,param_9);
      }
LAB_0050cbe2:
      plVar6 = (long *)plVar6[1];
    } while (plVar6 != (long *)0x0);
  }
  return;
}


