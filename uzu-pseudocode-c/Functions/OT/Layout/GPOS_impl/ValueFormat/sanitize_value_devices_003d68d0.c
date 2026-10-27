// Function : sanitize_value_devices
// Namespace: OT:Layout:GPOS_impl:ValueFormat
// Entry    : 003d68d0
// Prototype: undefined8 sanitize_value_devices(ValueFormat * this, long param_1, long param_2, long param_3)
// Body     : 003d68d0 - 003d6c70


/* OT::Layout::GPOS_impl::ValueFormat::sanitize_value_devices(hb_sanitize_context_t*,
   OT::Layout::GPOS_impl::ValueBase const*, OT::IntType<unsigned short, 2u> const*) const */

undefined8 __thiscall
OT::Layout::GPOS_impl::ValueFormat::sanitize_value_devices
          (ValueFormat *this,long param_1,long param_2,long param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  ushort uVar7;
  ushort uVar8;
  ulong uVar9;
  ushort *puVar10;
  ushort *puVar11;
  
  uVar1 = *(ushort *)this;
  uVar4 = uVar1 >> 8;
  puVar6 = (ushort *)
           (param_3 + (ulong)(uVar4 & 1) * 2 + (ulong)(uVar1 >> 9 & 1) * 2 +
            (ulong)(uVar1 >> 10 & 1) * 2 + (ulong)(uVar1 >> 0xb & 1) * 2);
  if ((uVar4 & 0x10) == 0) {
    puVar10 = puVar6;
  }
  else {
    puVar10 = puVar6 + 1;
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)puVar10 - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar1 = *puVar6;
    if (uVar1 != 0) {
      puVar11 = (ushort *)((ulong)(ushort)(uVar1 << 8 | uVar1 >> 8) + param_2);
      uVar9 = (long)puVar11 - *(long *)(param_1 + 8);
      if ((ulong)*(uint *)(param_1 + 0x18) < uVar9 + 6) {
LAB_003d6958:
        if (0x1f < *(uint *)(param_1 + 0x2c)) {
          return 0;
        }
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
        if (*(char *)(param_1 + 0x28) == '\0') {
          return 0;
        }
        *puVar6 = 0;
      }
      else {
        uVar1 = puVar11[2];
        if ((ushort)((uVar1 << 8 | uVar1 >> 8) - 1) < 3) {
          uVar8 = *puVar11 << 8 | *puVar11 >> 8;
          uVar7 = puVar11[1] << 8 | puVar11[1] >> 8;
          if (uVar7 < uVar8) {
            uVar2 = 6;
          }
          else {
            uVar2 = ((uint)uVar7 - (uint)uVar8 >> (4U - (char)(uVar1 >> 8) & 0x1f)) * 2 + 8;
          }
          if (((*(uint *)(param_1 + 0x18) < uVar9) ||
              ((uint)(*(int *)(param_1 + 0x10) - (int)puVar11) < uVar2)) ||
             (iVar5 = *(int *)(param_1 + 0x1c) - uVar2, *(int *)(param_1 + 0x1c) = iVar5, iVar5 < 1)
             ) goto LAB_003d6958;
        }
      }
    }
  }
  if ((uVar4 & 0x20) == 0) {
    puVar11 = puVar10;
  }
  else {
    puVar11 = puVar10 + 1;
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)puVar11 - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar1 = *puVar10;
    puVar6 = (ushort *)(ulong)uVar1;
    if (uVar1 != 0) {
      puVar6 = (ushort *)((ulong)(ushort)(uVar1 << 8 | uVar1 >> 8) + param_2);
      uVar9 = (long)puVar6 - *(long *)(param_1 + 8);
      if (uVar9 + 6 <= (ulong)*(uint *)(param_1 + 0x18)) {
        uVar1 = puVar6[2];
        if (2 < (ushort)((uVar1 << 8 | uVar1 >> 8) - 1)) goto LAB_003d6aa0;
        uVar8 = *puVar6 << 8 | *puVar6 >> 8;
        uVar7 = puVar6[1] << 8 | puVar6[1] >> 8;
        if (uVar7 < uVar8) {
          uVar2 = 6;
        }
        else {
          uVar2 = ((uint)uVar7 - (uint)uVar8 >> (4U - (char)(uVar1 >> 8) & 0x1f)) * 2 + 8;
        }
        if ((uVar9 <= *(uint *)(param_1 + 0x18)) &&
           (uVar2 <= (uint)(*(int *)(param_1 + 0x10) - (int)puVar6))) {
          uVar2 = *(int *)(param_1 + 0x1c) - uVar2;
          puVar6 = (ushort *)(ulong)uVar2;
          *(uint *)(param_1 + 0x1c) = uVar2;
          if (0 < (int)uVar2) goto LAB_003d6aa0;
        }
      }
      if (0x1f < *(uint *)(param_1 + 0x2c)) {
        return 0;
      }
      uVar2 = *(uint *)(param_1 + 0x2c) + 1;
      puVar6 = (ushort *)(ulong)uVar2;
      *(uint *)(param_1 + 0x2c) = uVar2;
      if (*(char *)(param_1 + 0x28) == '\0') {
        return 0;
      }
      *puVar10 = 0;
    }
  }
LAB_003d6aa0:
  if ((uVar4 & 0x40) == 0) {
    puVar10 = puVar11;
  }
  else {
    puVar10 = puVar11 + 1;
    if ((ulong)*(uint *)(param_1 + 0x18) < (ulong)((long)puVar10 - *(long *)(param_1 + 8))) {
      return 0;
    }
    uVar1 = *puVar11;
    puVar6 = (ushort *)(ulong)uVar1;
    if (uVar1 != 0) {
      puVar6 = (ushort *)((ulong)(ushort)(uVar1 << 8 | uVar1 >> 8) + param_2);
      uVar9 = (long)puVar6 - *(long *)(param_1 + 8);
      if (uVar9 + 6 <= (ulong)*(uint *)(param_1 + 0x18)) {
        uVar1 = puVar6[2];
        if (2 < (ushort)((uVar1 << 8 | uVar1 >> 8) - 1)) goto LAB_003d6b69;
        uVar8 = *puVar6 << 8 | *puVar6 >> 8;
        uVar7 = puVar6[1] << 8 | puVar6[1] >> 8;
        if (uVar7 < uVar8) {
          uVar2 = 6;
        }
        else {
          uVar2 = ((uint)uVar7 - (uint)uVar8 >> (4U - (char)(uVar1 >> 8) & 0x1f)) * 2 + 8;
        }
        if ((uVar9 <= *(uint *)(param_1 + 0x18)) &&
           (uVar2 <= (uint)(*(int *)(param_1 + 0x10) - (int)puVar6))) {
          uVar2 = *(int *)(param_1 + 0x1c) - uVar2;
          puVar6 = (ushort *)(ulong)uVar2;
          *(uint *)(param_1 + 0x1c) = uVar2;
          if (0 < (int)uVar2) goto LAB_003d6b69;
        }
      }
      if (0x1f < *(uint *)(param_1 + 0x2c)) {
        return 0;
      }
      uVar2 = *(uint *)(param_1 + 0x2c) + 1;
      puVar6 = (ushort *)(ulong)uVar2;
      *(uint *)(param_1 + 0x2c) = uVar2;
      if (*(char *)(param_1 + 0x28) == '\0') {
        return 0;
      }
      *puVar11 = 0;
    }
  }
LAB_003d6b69:
  uVar3 = CONCAT71((int7)((ulong)puVar6 >> 8),1);
  if ((uVar4 & 0x80) == 0) {
    return uVar3;
  }
  if ((ulong)((long)puVar10 + (2 - *(long *)(param_1 + 8))) <= (ulong)*(uint *)(param_1 + 0x18)) {
    uVar1 = *puVar10;
    if (uVar1 == 0) {
      return uVar3;
    }
    puVar6 = (ushort *)(param_2 + (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8));
    uVar9 = (long)puVar6 - *(long *)(param_1 + 8);
    if (uVar9 + 6 <= (ulong)*(uint *)(param_1 + 0x18)) {
      uVar1 = puVar6[2];
      if (2 < (ushort)((uVar1 << 8 | uVar1 >> 8) - 1)) {
        return uVar3;
      }
      uVar4 = *puVar6 << 8 | *puVar6 >> 8;
      uVar8 = puVar6[1] << 8 | puVar6[1] >> 8;
      if (uVar8 < uVar4) {
        uVar2 = 6;
      }
      else {
        uVar2 = ((uint)uVar8 - (uint)uVar4 >> (4U - (char)(uVar1 >> 8) & 0x1f)) * 2 + 8;
      }
      if (((uVar9 <= *(uint *)(param_1 + 0x18)) &&
          (uVar2 <= (uint)(*(int *)(param_1 + 0x10) - (int)puVar6))) &&
         (iVar5 = *(int *)(param_1 + 0x1c) - uVar2, *(int *)(param_1 + 0x1c) = iVar5, 0 < iVar5)) {
        return uVar3;
      }
    }
    if ((*(uint *)(param_1 + 0x2c) < 0x20) &&
       (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1, *(char *)(param_1 + 0x28) != '\0'
       )) {
      *puVar10 = 0;
      return uVar3;
    }
  }
  return 0;
}


