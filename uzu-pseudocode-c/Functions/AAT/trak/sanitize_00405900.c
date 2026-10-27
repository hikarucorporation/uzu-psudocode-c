// Function : sanitize
// Namespace: AAT:trak
// Entry    : 00405900
// Prototype: ulong sanitize(trak * this, long param_1)
// Body     : 00405900 - 004059e2


/* AAT::trak::sanitize(hb_sanitize_context_t*) const */

ulong __thiscall AAT::trak::sanitize(trak *this,long param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 unaff_RBP;
  ulong uVar3;
  
  if (((this + (0xc - *(long *)(param_1 + 8)) <= (trak *)(ulong)*(uint *)(param_1 + 0x18)) &&
      (*(short *)this == 0x100)) &&
     (this + (8 - *(long *)(param_1 + 8)) <= (trak *)(ulong)*(uint *)(param_1 + 0x18))) {
    uVar1 = *(ushort *)(this + 6);
    if (uVar1 != 0) {
      uVar2 = TrackData::sanitize((TrackData *)(this + (ushort)(uVar1 << 8 | uVar1 >> 8)),param_1,
                                  (long)this);
      if ((char)uVar2 == '\0') {
        if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
           (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
           *(char *)(param_1 + 0x28) == '\0')) goto LAB_004059da;
        *(undefined2 *)(this + 6) = 0;
      }
    }
    if (this + (10 - *(long *)(param_1 + 8)) <= (trak *)(ulong)*(uint *)(param_1 + 0x18)) {
      uVar1 = *(ushort *)(this + 8);
      uVar3 = CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
      if (uVar1 == 0) goto LAB_004059dc;
      uVar2 = TrackData::sanitize((TrackData *)(this + (ushort)(uVar1 << 8 | uVar1 >> 8)),param_1,
                                  (long)this);
      if ((char)uVar2 != '\0') goto LAB_004059dc;
      if ((*(uint *)(param_1 + 0x2c) < 0x20) &&
         (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
         *(char *)(param_1 + 0x28) != '\0')) {
        *(undefined2 *)(this + 8) = 0;
        goto LAB_004059dc;
      }
    }
  }
LAB_004059da:
  uVar3 = 0;
LAB_004059dc:
  return uVar3 & 0xffffffff;
}


