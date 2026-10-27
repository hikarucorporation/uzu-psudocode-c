// Function : curve
// Namespace: cff1_path_procs_extents_t
// Entry    : 00458820
// Prototype: undefined curve(long param_1, char * param_2, double * param_3, double * param_4, undefined8 * param_5)
// Body     : 00458820 - 00458a8a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* cff1_path_procs_extents_t::curve(CFF::cff1_cs_interp_env_t&, cff1_extents_param_t&, CFF::point_t
   const&, CFF::point_t const&, CFF::point_t const&) */

void __cdecl
cff1_path_procs_extents_t::curve
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
      goto LAB_00458997;
LAB_0045885e:
      dVar5 = *(double *)(param_1 + 0x1168);
      if (*(double *)(param_2 + 0x10) <= dVar5) goto LAB_00458875;
LAB_004589b3:
      *(double *)(param_2 + 0x10) = dVar5;
      dVar5 = *(double *)(param_1 + 0x1168);
      if (*(double *)(param_2 + 0x20) <= dVar5 && dVar5 != *(double *)(param_2 + 0x20))
      goto LAB_004589cb;
    }
    else {
      if (dVar4 < *(double *)(param_2 + 0x18) || dVar4 == *(double *)(param_2 + 0x18))
      goto LAB_0045885e;
LAB_00458997:
      *(double *)(param_2 + 0x18) = dVar4;
      dVar5 = *(double *)(param_1 + 0x1168);
      if (dVar5 < *(double *)(param_2 + 0x10)) goto LAB_004589b3;
LAB_00458875:
      if (*(double *)(param_2 + 0x20) <= dVar5 && dVar5 != *(double *)(param_2 + 0x20)) {
LAB_004589cb:
        *(double *)(param_2 + 0x20) = dVar5;
        dVar5 = *param_3;
        if ((double)CONCAT44(uVar3,uVar2) < dVar5 || (double)CONCAT44(uVar3,uVar2) == dVar5)
        goto LAB_0045888e;
        goto LAB_004589de;
      }
    }
    dVar5 = *param_3;
    if ((double)CONCAT44(uVar3,uVar2) < dVar5 || (double)CONCAT44(uVar3,uVar2) == dVar5)
    goto LAB_0045888e;
LAB_004589de:
    *(double *)(param_2 + 8) = dVar5;
    uVar2 = SUB84(dVar5,0);
    uVar3 = (undefined4)((ulong)dVar5 >> 0x20);
    dVar4 = *(double *)(param_2 + 0x18);
    dVar5 = *param_3;
    if (dVar4 < *param_3) goto LAB_004589fa;
LAB_0045889d:
    dVar5 = *(double *)(param_2 + 0x10);
    dVar7 = param_3[1];
    if (dVar5 <= dVar7) goto LAB_004588b1;
LAB_00458a17:
    dVar5 = dVar7;
    *(double *)(param_2 + 0x10) = dVar5;
    dVar6 = *(double *)(param_2 + 0x20);
    dVar7 = param_3[1];
    if (dVar6 < param_3[1]) goto LAB_00458a34;
LAB_004588c0:
    dVar7 = *param_4;
    if ((double)CONCAT44(uVar3,uVar2) < dVar7 || (double)CONCAT44(uVar3,uVar2) == dVar7)
    goto LAB_004588ce;
LAB_00458a4b:
    *(double *)(param_2 + 8) = dVar7;
    dVar7 = *param_4;
    if (dVar4 < dVar7) goto LAB_00458a5e;
LAB_004588d8:
    dVar4 = param_4[1];
    uVar2 = SUB84(dVar4,0);
    uVar3 = (undefined4)((ulong)dVar4 >> 0x20);
    if (dVar5 <= dVar4) goto LAB_004588e7;
LAB_00458a72:
    *(ulong *)(param_2 + 0x10) = CONCAT44(uVar3,uVar2);
    dVar5 = param_4[1];
    uVar2 = SUB84(dVar5,0);
    uVar3 = (undefined4)((ulong)dVar5 >> 0x20);
    if (dVar6 < dVar5) {
LAB_004588ed:
      *(ulong *)(param_2 + 0x20) = CONCAT44(uVar3,uVar2);
    }
  }
  else {
    dVar4 = *(double *)(param_2 + 8);
    uVar2 = SUB84(dVar4,0);
    uVar3 = (undefined4)((ulong)dVar4 >> 0x20);
    dVar5 = *param_3;
    if (dVar5 < dVar4) goto LAB_004589de;
LAB_0045888e:
    dVar4 = *(double *)(param_2 + 0x18);
    if (dVar5 <= dVar4) goto LAB_0045889d;
LAB_004589fa:
    dVar4 = dVar5;
    *(double *)(param_2 + 0x18) = dVar4;
    dVar5 = *(double *)(param_2 + 0x10);
    dVar7 = param_3[1];
    if (dVar7 < dVar5) goto LAB_00458a17;
LAB_004588b1:
    dVar6 = *(double *)(param_2 + 0x20);
    if (dVar7 <= dVar6) goto LAB_004588c0;
LAB_00458a34:
    dVar6 = dVar7;
    *(double *)(param_2 + 0x20) = dVar6;
    dVar7 = *param_4;
    if (dVar7 <= (double)CONCAT44(uVar3,uVar2) && (double)CONCAT44(uVar3,uVar2) != dVar7)
    goto LAB_00458a4b;
LAB_004588ce:
    if (dVar7 <= dVar4) goto LAB_004588d8;
LAB_00458a5e:
    *(double *)(param_2 + 0x18) = dVar7;
    dVar4 = param_4[1];
    uVar2 = SUB84(dVar4,0);
    uVar3 = (undefined4)((ulong)dVar4 >> 0x20);
    if (dVar4 < dVar5) goto LAB_00458a72;
LAB_004588e7:
    if (dVar6 <= (double)CONCAT44(uVar3,uVar2) && (double)CONCAT44(uVar3,uVar2) != dVar6)
    goto LAB_004588ed;
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
    goto LAB_00458949;
LAB_00458917:
    dVar5 = *(double *)(param_1 + 0x1168);
    uVar2 = SUB84(dVar5,0);
    uVar3 = (undefined4)((ulong)dVar5 >> 0x20);
    if (dVar5 < *(double *)(param_2 + 0x10)) {
LAB_00458961:
      *(ulong *)(param_2 + 0x10) = CONCAT44(uVar3,uVar2);
      dVar5 = *(double *)(param_1 + 0x1168);
      uVar2 = SUB84(dVar5,0);
      uVar3 = (undefined4)((ulong)dVar5 >> 0x20);
      if (dVar5 < *(double *)(param_2 + 0x20) || dVar5 == *(double *)(param_2 + 0x20)) {
        return;
      }
      goto LAB_00458975;
    }
  }
  else {
    if (dVar5 < *(double *)(param_2 + 0x18) || dVar5 == *(double *)(param_2 + 0x18))
    goto LAB_00458917;
LAB_00458949:
    *(ulong *)(param_2 + 0x18) = CONCAT44(uVar3,uVar2);
    dVar5 = *(double *)(param_1 + 0x1168);
    uVar2 = SUB84(dVar5,0);
    uVar3 = (undefined4)((ulong)dVar5 >> 0x20);
    if (dVar5 < *(double *)(param_2 + 0x10)) goto LAB_00458961;
  }
  if ((double)CONCAT44(uVar3,uVar2) < *(double *)(param_2 + 0x20) ||
      (double)CONCAT44(uVar3,uVar2) == *(double *)(param_2 + 0x20)) {
    return;
  }
LAB_00458975:
  *(ulong *)(param_2 + 0x20) = CONCAT44(uVar3,uVar2);
  return;
}


