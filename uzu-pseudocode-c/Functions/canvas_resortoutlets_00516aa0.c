// Function : canvas_resortoutlets
// Namespace: 
// Entry    : 00516aa0
// Prototype: undefined canvas_resortoutlets(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9)
// Body     : 00516aa0 - 00516c33


void canvas_resortoutlets
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long *param_9)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long extraout_RDX;
  long lVar6;
  long extraout_RDX_00;
  long extraout_RDX_01;
  uint uVar7;
  char *in_R8;
  undefined4 *in_R9;
  long *plVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar12;
  undefined8 extraout_XMM0_Qa_00;
  int local_4c;
  size_t local_48;
  undefined4 local_3c;
  char local_38 [4];
  undefined1 local_34 [4];
  
  puVar1 = PTR_voutlet_class_00715fc0;
  plVar5 = (long *)param_9[6];
  if (plVar5 != (long *)0x0) {
    uVar10 = 0;
    do {
      lVar6 = *plVar5;
      plVar5 = (long *)plVar5[1];
      uVar10 = uVar10 + (lVar6 == *(long *)PTR_voutlet_class_00715fc0);
    } while (plVar5 != (long *)0x0);
    if (1 < uVar10) {
      local_48 = (ulong)uVar10 << 3;
      plVar4 = plVar5;
      plVar2 = getbytes(local_48);
      plVar3 = (long *)param_9[6];
      lVar6 = extraout_RDX;
      uVar12 = extraout_XMM0_Qa;
      uVar7 = uVar10;
      if (plVar3 != (long *)0x0) {
        lVar6 = *(long *)puVar1;
        plVar5 = plVar2;
        do {
          if (*plVar3 == lVar6) {
            *plVar5 = (long)plVar3;
            plVar5 = plVar5 + 1;
            lVar6 = *(long *)puVar1;
          }
          plVar3 = (long *)plVar3[1];
        } while (plVar3 != (long *)0x0);
      }
      do {
        iVar9 = -0x7fffffff;
        plVar8 = (long *)0x0;
        plVar3 = plVar2;
        uVar11 = uVar10;
        do {
          uVar11 = uVar11 - 1;
          if ((long *)*plVar3 != (long *)0x0) {
            plVar5 = (long *)local_34;
            plVar4 = param_9;
            in_R8 = local_38;
            in_R9 = &local_3c;
            uVar12 = gobj_getrect((long *)*plVar3,param_9,&local_4c,(undefined4 *)plVar5,
                                  (undefined4 *)local_38,&local_3c);
            lVar6 = extraout_RDX_00;
            if (iVar9 < local_4c) {
              plVar8 = plVar3;
              iVar9 = local_4c;
            }
          }
          plVar3 = plVar3 + 1;
        } while (uVar11 != 0);
        if (plVar8 == (long *)0x0) break;
        uVar7 = uVar7 - 1;
        plVar3 = (long *)*plVar8;
        *plVar8 = 0;
        plVar4 = (long *)voutlet_getit(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,
                                       param_8,plVar3,plVar4,lVar6,plVar5,in_R8,in_R9);
        uVar12 = obj_moveoutletfirst((long)param_9,(long)plVar4);
        lVar6 = extraout_RDX_01;
      } while (uVar7 != 0);
      freebytes(plVar2);
      if (((param_9[9] != 0) && ((*(byte *)((long)param_9 + 0xe9) & 8) == 0)) &&
         (uVar10 = glist_isvisible(param_9[9]), uVar10 != 0)) {
        canvas_fixlinesfor(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                           param_8,param_9[9],(long)param_9);
      }
    }
  }
  return;
}


