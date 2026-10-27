// Function : curve
// Namespace: cff2_path_procs_extents_t
// Entry    : 0045baa0
// Prototype: undefined curve(long param_1, char * param_2, double * param_3, double * param_4, undefined8 * param_5)
// Body     : 0045baa0 - 0045bd0a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* cff2_path_procs_extents_t::curve(CFF::cff2_cs_interp_env_t<CFF::number_t>&,
   cff2_extents_param_t&, CFF::point_t const&, CFF::point_t const&, CFF::point_t const&) */

void __cdecl
cff2_path_procs_extents_t::curve
          (long param_1,char *param_2,double *param_3,double *param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if (*param_2 == '\0') {
    *param_2 = '\x01';
    dVar5 = *(double *)(param_2 + 8);
    uVar2 = SUB84(dVar5,0);
    uVar3 = (undefined4)((ulong)dVar5 >> 0x20);
    dVar4 = *(double *)(param_1 + 0x1160);
    if (dVar4 < dVar5) {
      *(double *)(param_2 + 8) = dVar4;
      uVar2 = SUB84(dVar4,0);
      uVar3 = (undefined4)((ulong)dVar4 >> 0x20);
      dVar4 = *(double *)(param_1 + 0x1160);
      if (*(double *)(param_2 + 0x18) <= dVar4 && dVar4 != *(double *)(param_2 + 0x18))
      goto LAB_0045bc17;
LAB_0045bade:
      dVar5 = *(double *)(param_1 + 0x1168);
      if (*(double *)(param_2 + 0x10) <= dVar5) goto LAB_0045baf5;
LAB_0045bc33:
      *(double *)(param_2 + 0x10) = dVar5;
      dVar5 = *(double *)(param_1 + 0x1168);
      if (*(double *)(param_2 + 0x20) <= dVar5 && dVar5 != *(double *)(param_2 + 0x20))
      goto LAB_0045bc4b;
    }
    else {
      if (dVar4 < *(double *)(param_2 + 0x18) || dVar4 == *(double *)(param_2 + 0x18))
      goto LAB_0045bade;
LAB_0045bc17:
      *(double *)(param_2 + 0x18) = dVar4;
      dVar5 = *(double *)(param_1 + 0x1168);
      if (dVar5 < *(double *)(param_2 + 0x10)) goto LAB_0045bc33;
LAB_0045baf5:
      if (*(double *)(param_2 + 0x20) <= dVar5 && dVar5 != *(double *)(param_2 + 0x20)) {
LAB_0045bc4b:
        *(double *)(param_2 + 0x20) = dVar5;
        dVar5 = *param_3;
        if ((double)CONCAT44(uVar3,uVar2) < dVar5 || (double)CONCAT44(uVar3,uVar2) == dVar5)
        goto LAB_0045bb0e;
        goto LAB_0045bc5e;
      }
    }
    dVar5 = *param_3;
    if ((double)CONCAT44(uVar3,uVar2) < dVar5 || (double)CONCAT44(uVar3,uVar2) == dVar5)
    goto LAB_0045bb0e;
LAB_0045bc5e:
    *(double *)(param_2 + 8) = dVar5;
    uVar2 = SUB84(dVar5,0);
    uVar3 = (undefined4)((ulong)dVar5 >> 0x20);
    dVar4 = *(double *)(param_2 + 0x18);
    dVar5 = *param_3;
    if (dVar4 < *param_3) goto LAB_0045bc7a;
LAB_0045bb1d:
    dVar5 = *(double *)(param_2 + 0x10);
    dVar7 = param_3[1];
    if (dVar5 <= dVar7) goto LAB_0045bb31;
LAB_0045bc97:
    dVar5 = dVar7;
    *(double *)(param_2 + 0x10) = dVar5;
    dVar6 = *(double *)(param_2 + 0x20);
    dVar7 = param_3[1];
    if (dVar6 < param_3[1]) goto LAB_0045bcb4;
LAB_0045bb40:
    dVar7 = *param_4;
    if ((double)CONCAT44(uVar3,uVar2) < dVar7 || (double)CONCAT44(uVar3,uVar2) == dVar7)
    goto LAB_0045bb4e;
LAB_0045bccb:
    *(double *)(param_2 + 8) = dVar7;
    dVar7 = *param_4;
    if (dVar4 < dVar7) goto LAB_0045bcde;
LAB_0045bb58:
    dVar4 = param_4[1];
    uVar2 = SUB84(dVar4,0);
    uVar3 = (undefined4)((ulong)dVar4 >> 0x20);
    if (dVar5 <= dVar4) goto LAB_0045bb67;
LAB_0045bcf2:
    *(ulong *)(param_2 + 0x10) = CONCAT44(uVar3,uVar2);
    dVar5 = param_4[1];
    uVar2 = SUB84(dVar5,0);
    uVar3 = (undefined4)((ulong)dVar5 >> 0x20);
    if (dVar6 < dVar5) {
LAB_0045bb6d:
      *(ulong *)(param_2 + 0x20) = CONCAT44(uVar3,uVar2);
    }
  }
  else {
    dVar4 = *(double *)(param_2 + 8);
    uVar2 = SUB84(dVar4,0);
    uVar3 = (undefined4)((ulong)dVar4 >> 0x20);
    dVar5 = *param_3;
    if (dVar5 < dVar4) goto LAB_0045bc5e;
LAB_0045bb0e:
    dVar4 = *(double *)(param_2 + 0x18);
    if (dVar5 <= dVar4) goto LAB_0045bb1d;
LAB_0045bc7a:
    dVar4 = dVar5;
    *(double *)(param_2 + 0x18) = dVar4;
    dVar5 = *(double *)(param_2 + 0x10);
    dVar7 = param_3[1];
    if (dVar7 < dVar5) goto LAB_0045bc97;
LAB_0045bb31:
    dVar6 = *(double *)(param_2 + 0x20);
    if (dVar7 <= dVar6) goto LAB_0045bb40;
LAB_0045bcb4:
    dVar6 = dVar7;
    *(double *)(param_2 + 0x20) = dVar6;
    dVar7 = *param_4;
    if (dVar7 <= (double)CONCAT44(uVar3,uVar2) && (double)CONCAT44(uVar3,uVar2) != dVar7)
    goto LAB_0045bccb;
LAB_0045bb4e:
    if (dVar7 <= dVar4) goto LAB_0045bb58;
LAB_0045bcde:
    *(double *)(param_2 + 0x18) = dVar7;
    dVar4 = param_4[1];
    uVar2 = SUB84(dVar4,0);
    uVar3 = (undefined4)((ulong)dVar4 >> 0x20);
    if (dVar4 < dVar5) goto LAB_0045bcf2;
LAB_0045bb67:
    if (dVar6 <= (double)CONCAT44(uVar3,uVar2) && (double)CONCAT44(uVar3,uVar2) != dVar6)
    goto LAB_0045bb6d;
  }
  uVar1 = param_5[1];
  *(undefined8 *)(param_1 + 0x1160) = *param_5;
  *(undefined8 *)(param_1 + 0x1168) = uVar1;
  dVar5 = *(double *)(param_1 + 0x1160);
  uVar2 = SUB84(dVar5,0);
  uVar3 = (undefined4)((ulong)dVar5 >> 0x20);
  if (dVar5 < *(double *)(param_2 + 8)) {
    *(double *)(param_2 + 8) = dVar5;
    dVar5 = *(double *)(param_1 + 0x1160);
    uVar2 = SUB84(dVar5,0);
    uVar3 = (undefined4)((ulong)dVar5 >> 0x20);
    if (*(double *)(param_2 + 0x18) <= dVar5 && dVar5 != *(double *)(param_2 + 0x18))
    goto LAB_0045bbc9;
LAB_0045bb97:
    dVar5 = *(double *)(param_1 + 0x1168);
    uVar2 = SUB84(dVar5,0);
    uVar3 = (undefined4)((ulong)dVar5 >> 0x20);
    if (dVar5 < *(double *)(param_2 + 0x10)) {
LAB_0045bbe1:
      *(ulong *)(param_2 + 0x10) = CONCAT44(uVar3,uVar2);
      dVar5 = *(double *)(param_1 + 0x1168);
      uVar2 = SUB84(dVar5,0);
      uVar3 = (undefined4)((ulong)dVar5 >> 0x20);
      if (dVar5 < *(double *)(param_2 + 0x20) || dVar5 == *(double *)(param_2 + 0x20)) {
        return;
      }
      goto LAB_0045bbf5;
    }
  }
  else {
    if (dVar5 < *(double *)(param_2 + 0x18) || dVar5 == *(double *)(param_2 + 0x18))
    goto LAB_0045bb97;
LAB_0045bbc9:
    *(ulong *)(param_2 + 0x18) = CONCAT44(uVar3,uVar2);
    dVar5 = *(double *)(param_1 + 0x1168);
    uVar2 = SUB84(dVar5,0);
    uVar3 = (undefined4)((ulong)dVar5 >> 0x20);
    if (dVar5 < *(double *)(param_2 + 0x10)) goto LAB_0045bbe1;
  }
  if ((double)CONCAT44(uVar3,uVar2) < *(double *)(param_2 + 0x20) ||
      (double)CONCAT44(uVar3,uVar2) == *(double *)(param_2 + 0x20)) {
    return;
  }
LAB_0045bbf5:
  *(ulong *)(param_2 + 0x20) = CONCAT44(uVar3,uVar2);
  return;
}


