// Function : StructAtOffsetOrNull<CFF::CFF1FDSelect,OT::IntType<unsigned_short,2u>const&>
// Namespace: CFF
// Entry    : 0044c5f0
// Prototype: char * StructAtOffsetOrNull<CFF::CFF1FDSelect,OT::IntType<unsigned_short,2u>const&>(long param_1, int param_2, long param_3, ushort * param_4)
// Body     : 0044c5f0 - 0044c691


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* CFF::CFF1FDSelect const& CFF::StructAtOffsetOrNull<CFF::CFF1FDSelect, OT::IntType<unsigned short,
   2u> const&>(void const*, int, hb_sanitize_context_t&, OT::IntType<unsigned short, 2u> const&) */

char * __cdecl
CFF::StructAtOffsetOrNull<CFF::CFF1FDSelect,OT::IntType<unsigned_short,2u>const&>
          (long param_1,int param_2,long param_3,ushort *param_4)

{
  FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>> *this;
  undefined2 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = (char *)&_hb_NullPool;
  if (param_2 != 0) {
    pcVar4 = (char *)(param_1 + param_2);
    if (((ulong)((long)pcVar4 - *(long *)(param_3 + 8)) <= (ulong)*(uint *)(param_3 + 0x18)) &&
       (this = (FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>> *)
               (pcVar4 + 1),
       (ulong)((long)this - *(long *)(param_3 + 8)) <= (ulong)*(uint *)(param_3 + 0x18))) {
      if (*pcVar4 == '\x03') {
        uVar1 = FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>>::sanitize
                          (this,param_3,(uint)(ushort)(*param_4 << 8 | *param_4 >> 8));
        if ((char)uVar1 == '\0') {
          return (char *)&_hb_NullPool;
        }
      }
      else {
        if (*pcVar4 != '\0') {
          return (char *)&_hb_NullPool;
        }
        if ((ulong)*(uint *)(param_3 + 0x18) < (ulong)((long)this - *(long *)(param_3 + 8))) {
          return (char *)&_hb_NullPool;
        }
        if ((ulong)*(uint *)(param_3 + 0x18) < (ulong)((long)this - *(long *)(param_3 + 8))) {
          return (char *)&_hb_NullPool;
        }
        if ((uint)(*(int *)(param_3 + 0x10) - (int)this) < *(uint *)(param_3 + 0x38)) {
          return (char *)&_hb_NullPool;
        }
        iVar2 = *(int *)(param_3 + 0x1c) - *(uint *)(param_3 + 0x38);
        *(int *)(param_3 + 0x1c) = iVar2;
        if (iVar2 < 1) {
          return (char *)&_hb_NullPool;
        }
      }
      pcVar3 = pcVar4;
    }
  }
  return pcVar3;
}


