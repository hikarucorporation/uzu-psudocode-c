// Function : sanitize
// Namespace: OT:Condition
// Entry    : 003d4fa0
// Prototype: ulong sanitize(Condition * this, long param_1)
// Body     : 003d4fa0 - 003d5294


/* OT::Condition::sanitize(hb_sanitize_context_t*) const */

ulong __thiscall OT::Condition::sanitize(Condition *this,long param_1)

{
  Condition *pCVar1;
  Condition CVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 unaff_R14;
  undefined7 uVar7;
  ulong uVar6;
  
  if ((Condition *)(ulong)*(uint *)(param_1 + 0x18) < this + (2 - *(long *)(param_1 + 8)))
  goto LAB_003d4fbe;
  uVar7 = (undefined7)((ulong)unaff_R14 >> 8);
  uVar6 = CONCAT71(uVar7,1);
  switch(*(ushort *)this << 8 | *(ushort *)this >> 8) {
  case 1:
  case 2:
    uVar6 = CONCAT71(uVar7,this + (8 - *(long *)(param_1 + 8)) <=
                           (Condition *)(ulong)*(uint *)(param_1 + 0x18));
    goto switchD_003d4fed_default;
  case 3:
    pCVar1 = this + 3;
    if ((((ulong)((long)pCVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
        ((ulong)((long)pCVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) &&
       (((uint)(byte)this[2] * 3 <= (uint)(*(int *)(param_1 + 0x10) - (int)pCVar1) &&
        (iVar3 = *(int *)(param_1 + 0x1c) + (uint)(byte)this[2] * -3,
        *(int *)(param_1 + 0x1c) = iVar3, 0 < iVar3)))) {
      CVar2 = this[2];
      if ((ulong)(byte)CVar2 != 0) {
        lVar5 = 0;
        do {
          if ((Condition *)(ulong)*(uint *)(param_1 + 0x18) <
              this + ((lVar5 + 6) - *(long *)(param_1 + 8))) goto LAB_003d4fbe;
          if (((this[lVar5 + 4] != (Condition)0x0 || this[lVar5 + 3] != (Condition)0x0) ||
               this[lVar5 + 5] != (Condition)0x0) &&
             (uVar4 = sanitize(this + ((ulong)(byte)this[lVar5 + 4] << 8 |
                                       (ulong)(byte)this[lVar5 + 3] << 0x10 |
                                      (ulong)(byte)this[lVar5 + 5]),param_1), (char)uVar4 == '\0'))
          {
            if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
               (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
               *(char *)(param_1 + 0x28) == '\0')) goto LAB_003d4fbe;
            *(undefined2 *)(this + lVar5 + 3) = 0;
            this[lVar5 + 5] = (Condition)0x0;
          }
          lVar5 = lVar5 + 3;
        } while ((ulong)(byte)CVar2 * 3 != lVar5);
      }
      goto switchD_003d4fed_default;
    }
    break;
  case 4:
    pCVar1 = this + 3;
    if (((((ulong)((long)pCVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18)) &&
         ((ulong)((long)pCVar1 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))) &&
        ((uint)(byte)this[2] * 3 <= (uint)(*(int *)(param_1 + 0x10) - (int)pCVar1))) &&
       (iVar3 = *(int *)(param_1 + 0x1c) + (uint)(byte)this[2] * -3,
       *(int *)(param_1 + 0x1c) = iVar3, 0 < iVar3)) {
      CVar2 = this[2];
      if ((ulong)(byte)CVar2 != 0) {
        lVar5 = 0;
        do {
          if ((Condition *)(ulong)*(uint *)(param_1 + 0x18) <
              this + ((lVar5 + 6) - *(long *)(param_1 + 8))) goto LAB_003d4fbe;
          if (((this[lVar5 + 4] != (Condition)0x0 || this[lVar5 + 3] != (Condition)0x0) ||
               this[lVar5 + 5] != (Condition)0x0) &&
             (uVar4 = sanitize(this + ((ulong)(byte)this[lVar5 + 4] << 8 |
                                       (ulong)(byte)this[lVar5 + 3] << 0x10 |
                                      (ulong)(byte)this[lVar5 + 5]),param_1), (char)uVar4 == '\0'))
          {
            if ((0x1f < *(uint *)(param_1 + 0x2c)) ||
               (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
               *(char *)(param_1 + 0x28) == '\0')) goto LAB_003d4fbe;
            *(undefined2 *)(this + lVar5 + 3) = 0;
            this[lVar5 + 5] = (Condition)0x0;
          }
          lVar5 = lVar5 + 3;
        } while ((ulong)(byte)CVar2 * 3 != lVar5);
      }
      goto switchD_003d4fed_default;
    }
    break;
  case 5:
    if (this + (5 - *(long *)(param_1 + 8)) <= (Condition *)(ulong)*(uint *)(param_1 + 0x18)) {
      if (((this[3] == (Condition)0x0 && this[2] == (Condition)0x0) && this[4] == (Condition)0x0) ||
         (uVar4 = sanitize(this + ((ulong)(byte)this[3] << 8 | (ulong)(byte)this[2] << 0x10 |
                                  (ulong)(byte)this[4]),param_1), (char)uVar4 != '\0'))
      goto switchD_003d4fed_default;
      if ((*(uint *)(param_1 + 0x2c) < 0x20) &&
         (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1,
         *(char *)(param_1 + 0x28) != '\0')) {
        *(undefined2 *)(this + 2) = 0;
        this[4] = (Condition)0x0;
        goto switchD_003d4fed_default;
      }
    }
    break;
  default:
    goto switchD_003d4fed_default;
  }
LAB_003d4fbe:
  uVar6 = 0;
switchD_003d4fed_default:
  return uVar6 & 0xffffffff;
}


