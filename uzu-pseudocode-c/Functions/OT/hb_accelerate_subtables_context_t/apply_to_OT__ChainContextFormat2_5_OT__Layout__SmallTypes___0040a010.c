// Function : apply_to<OT::ChainContextFormat2_5<OT::Layout::SmallTypes>>
// Namespace: OT:hb_accelerate_subtables_context_t
// Entry    : 0040a010
// Prototype: bool apply_to<OT::ChainContextFormat2_5<OT::Layout::SmallTypes>>(ChainContextFormat2_5<OT::Layout::SmallTypes> * param_1, long param_2)
// Body     : 0040a010 - 0040a016


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* bool 
   OT::hb_accelerate_subtables_context_t::apply_to<OT::ChainContextFormat2_5<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*) */

bool __cdecl
OT::hb_accelerate_subtables_context_t::apply_to<OT::ChainContextFormat2_5<OT::Layout::SmallTypes>>
          (ChainContextFormat2_5<OT::Layout::SmallTypes> *param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = ChainContextFormat2_5<OT::Layout::SmallTypes>::_apply(param_1,param_2,'\0');
  return SUB81(uVar1,0);
}


