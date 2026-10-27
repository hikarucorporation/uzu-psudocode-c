// Function : _dispatch<OT::OffsetTo<OT::ChainRule<OT::Layout::SmallTypes>,OT::IntType<unsigned_short,2u>,void,true>,OT::ChainRuleSet<OT::Layout::SmallTypes>const*>
// Namespace: hb_sanitize_context_t
// Entry    : 003d6190
// Prototype: undefined8 _dispatch<OT::OffsetTo<OT::ChainRule<OT::Layout::SmallTypes>,OT::IntType<unsigned_short,2u>,void,true>,OT::ChainRuleSet<OT::Layout::SmallTypes>const*>(long param_1, ushort * param_2, long * param_3)
// Body     : 003d6190 - 003d62b0


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* decltype (({parm#1}.sanitize)(this, (std::forward<OT::ChainRuleSet<OT::Layout::SmallTypes>
   const*>)({parm#3})))
   hb_sanitize_context_t::_dispatch<OT::OffsetTo<OT::ChainRule<OT::Layout::SmallTypes>,
   OT::IntType<unsigned short, 2u>, void, true>, OT::ChainRuleSet<OT::Layout::SmallTypes>
   const*>(OT::OffsetTo<OT::ChainRule<OT::Layout::SmallTypes>, OT::IntType<unsigned short, 2u>,
   void, true> const&, hb_priority<1u>, OT::ChainRuleSet<OT::Layout::SmallTypes> const*&&) */

undefined8 __cdecl
hb_sanitize_context_t::
_dispatch<OT::OffsetTo<OT::ChainRule<OT::Layout::SmallTypes>,OT::IntType<unsigned_short,2u>,void,true>,OT::ChainRuleSet<OT::Layout::SmallTypes>const*>
          (long param_1,ushort *param_2,long *param_3)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  ushort *puVar6;
  long lVar7;
  ushort *puVar8;
  
  uVar3 = (long)param_2 + (2 - *(long *)(param_1 + 8));
  if (uVar3 <= *(uint *)(param_1 + 0x18)) {
    uVar1 = *param_2;
    uVar4 = CONCAT71((int7)(uVar3 >> 8),1);
    if (uVar1 == 0) {
      return uVar4;
    }
    puVar6 = (ushort *)(*param_3 + (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8));
    if (((ulong)((long)puVar6 + (2 - *(long *)(param_1 + 8))) <= (ulong)*(uint *)(param_1 + 0x18))
       && (puVar6 = puVar6 + (ulong)(ushort)(*puVar6 << 8 | *puVar6 >> 8) + 1,
          (ulong)((long)puVar6 + (2 - *(long *)(param_1 + 8))) <= (ulong)*(uint *)(param_1 + 0x18)))
    {
      uVar1 = *puVar6;
      lVar7 = 2;
      if (uVar1 != 0) {
        lVar7 = (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8) * 2;
      }
      puVar6 = (ushort *)(lVar7 + (long)puVar6);
      if ((ulong)((long)puVar6 + (2 - *(long *)(param_1 + 8))) <= (ulong)*(uint *)(param_1 + 0x18))
      {
        uVar3 = (ulong)(ushort)(*puVar6 << 8 | *puVar6 >> 8);
        puVar8 = puVar6 + uVar3 + 2;
        if (((((ulong)((long)puVar8 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))
             && ((ulong)((long)puVar8 - *(long *)(param_1 + 8)) <= (ulong)*(uint *)(param_1 + 0x18))
             ) && (uVar2 = (uint)(ushort)(puVar6[uVar3 + 1] << 8 | puVar6[uVar3 + 1] >> 8),
                  uVar2 * 4 <= (uint)(*(int *)(param_1 + 0x10) - (int)puVar8))) &&
           (iVar5 = *(int *)(param_1 + 0x1c) + uVar2 * -4, *(int *)(param_1 + 0x1c) = iVar5,
           0 < iVar5)) {
          return uVar4;
        }
      }
    }
    if ((*(uint *)(param_1 + 0x2c) < 0x20) &&
       (*(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1, *(char *)(param_1 + 0x28) != '\0'
       )) {
      *param_2 = 0;
      return uVar4;
    }
  }
  return 0;
}


