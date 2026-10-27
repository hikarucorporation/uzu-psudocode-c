// Function : iemgui_send
// Namespace: 
// Entry    : 005747d0
// Prototype: undefined iemgui_send(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, long param_10, undefined8 * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005747d0 - 005748e7


void iemgui_send(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long *param_9,long param_10,undefined8 *param_11,undefined8 param_12,char *param_13,
                undefined8 param_14)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined7 extraout_var;
  undefined8 extraout_RDX;
  uint uVar8;
  undefined8 extraout_XMM0_Qa;
  
  uVar1 = *(uint *)(param_10 + 0x440);
  if ((param_11 == (undefined8 *)0x0) || (puVar6 = gensym("empty"), puVar6 == param_11)) {
    plVar7 = (long *)__tls_get_addr(&PTR_007159b0);
    *(long *)(param_10 + 0x470) = *plVar7 + 0x168;
    puVar6 = (undefined8 *)0x0;
    uVar5 = 0;
  }
  else {
    *(undefined8 **)(param_10 + 0x470) = param_11;
    puVar6 = canvas_realizedollar
                       (extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        *(long *)(param_10 + 0x30),param_11,extraout_RDX,param_12,param_13,param_14)
    ;
    uVar5 = 0x80;
  }
  *(undefined8 **)(param_10 + 0x458) = puVar6;
  uVar2 = *(uint *)(param_10 + 0x440);
  uVar8 = uVar2 & 0xffffff7f | uVar5;
  *(uint *)(param_10 + 0x440) = uVar8 | 0x4000000;
  if (((~uVar8 & 0xc0) == 0) &&
     (iVar4 = strcmp((char *)*puVar6,(char *)**(undefined8 **)(param_10 + 0x460)), iVar4 == 0)) {
    *(uint *)(param_10 + 0x440) = uVar2 & 0xfbffff7f | uVar5;
    uVar5 = glist_isvisible(*(long *)(param_10 + 0x30));
  }
  else {
    uVar5 = glist_isvisible(*(long *)(param_10 + 0x30));
  }
  if ((uVar5 == 0) ||
     (bVar3 = gobj_shouldvis(param_9,*(long **)(param_10 + 0x30)),
     (int)CONCAT71(extraout_var,bVar3) == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005748c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_10 + 0x38))
            (param_9,*(undefined8 *)(param_10 + 0x30),(uVar1 >> 5 & 2) + 6 | uVar1 >> 7 & 1);
  return;
}


