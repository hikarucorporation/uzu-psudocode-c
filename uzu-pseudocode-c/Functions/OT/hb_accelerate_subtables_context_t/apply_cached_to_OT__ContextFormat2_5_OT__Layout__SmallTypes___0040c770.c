// Function : apply_cached_to<OT::ContextFormat2_5<OT::Layout::SmallTypes>>
// Namespace: OT:hb_accelerate_subtables_context_t
// Entry    : 0040c770
// Prototype: bool apply_cached_to<OT::ContextFormat2_5<OT::Layout::SmallTypes>>(ContextFormat2_5<OT::Layout::SmallTypes> * param_1, long param_2)
// Body     : 0040c770 - 0040c779


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* bool 
   OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::ContextFormat2_5<OT::Layout::SmallTypes>
   >(void const*, OT::hb_ot_apply_context_t*) */

bool __cdecl
OT::hb_accelerate_subtables_context_t::apply_cached_to<OT::ContextFormat2_5<OT::Layout::SmallTypes>>
          (ContextFormat2_5<OT::Layout::SmallTypes> *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = ContextFormat2_5<OT::Layout::SmallTypes>::_apply(param_1,param_2,'\x01');
  return SUB81(uVar1,0);
}


