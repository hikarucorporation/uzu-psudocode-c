// Function : addDependent
// Namespace: Steinberg:UpdateHandler
// Entry    : 00183f40
// Prototype: undefined8 addDependent(UpdateHandler * this, undefined8 * param_1, long param_2)
// Body     : 00183f40 - 001841eb


/* Steinberg::UpdateHandler::addDependent(Steinberg::FUnknown*, Steinberg::IDependent*) */

undefined8 __thiscall
Steinberg::UpdateHandler::addDependent(UpdateHandler *this,undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  int iVar4;
  _Rb_tree_node_base *p_Var5;
  _Rb_tree_node_base *p_Var6;
  ulong uVar7;
  void *__dest;
  _Rb_tree_node_base *p_Var8;
  undefined8 uVar9;
  ulong uVar10;
  _Rb_tree_node_base *p_Var11;
  size_t __n;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long *local_70;
  long *local_68;
  long *local_60;
  UpdateHandler *local_58;
  void *local_50;
  void *local_48;
  long *local_40;
  long **local_38;
  
  local_70 = (long *)0x0;
  if (param_1 == (undefined8 *)0x0) {
    return 1;
  }
  iVar4 = (**(code **)*param_1)(param_1,0x71aae8,&local_70);
  if (iVar4 != 0) {
    (**(code **)*param_1)(param_1,0x71ab08,&local_70);
  }
  plVar2 = local_70;
  uVar9 = 1;
  if ((param_2 == 0) || (local_70 == (long *)0x0)) goto LAB_001840fd;
  local_58 = this + 0x20;
                    /* try { // try from 00183fbb to 00183fc2 has its CatchHandler @ 001841fb */
  (**(code **)(*(long *)(this + 0x20) + 0x10))();
  lVar14 = *(long *)(this + 0x50);
  lVar12 = ((ulong)plVar2 >> 0xc & 0xff) * 0x30;
  p_Var5 = *(_Rb_tree_node_base **)(lVar14 + 0x10 + lVar12);
  p_Var11 = (_Rb_tree_node_base *)(lVar14 + lVar12 + 8);
  if (p_Var5 == (_Rb_tree_node_base *)0x0) {
LAB_00184044:
                    /* try { // try from 00184044 to 0018404d has its CatchHandler @ 001841ee */
    local_70 = operator_new(8);
    *local_70 = param_2;
    local_68 = local_70 + 1;
    local_40 = plVar2;
    p_Var5 = *(_Rb_tree_node_base **)
              ((_Rb_tree<Steinberg::FUnknown_const*,std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>,std::_Select1st<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>,std::less<Steinberg::FUnknown_const*>,std::allocator<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>>
                *)(lVar14 + lVar12) + 0x10);
    local_60 = local_68;
    if (p_Var5 == (_Rb_tree_node_base *)0x0) {
LAB_001840ac:
      local_38 = &local_40;
                    /* try { // try from 001840b6 to 001840e0 has its CatchHandler @ 00184208 */
      p_Var6 = std::
               _Rb_tree<Steinberg::FUnknown_const*,std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>,std::_Select1st<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>,std::less<Steinberg::FUnknown_const*>,std::allocator<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>>
               ::
               _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<Steinberg::FUnknown_const*&&>,std::tuple<>>
                         ((_Rb_tree<Steinberg::FUnknown_const*,std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>,std::_Select1st<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>,std::less<Steinberg::FUnknown_const*>,std::allocator<std::pair<Steinberg::FUnknown_const*const,std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>>>>
                           *)(lVar14 + lVar12),p_Var11,PTR_piecewise_construct_00715990,&local_38);
    }
    else {
      p_Var6 = p_Var11;
      do {
        p_Var8 = p_Var5 + 0x18;
        if (plVar2 <= *(long **)(p_Var5 + 0x20)) {
          p_Var8 = p_Var5 + 0x10;
          p_Var6 = p_Var5;
        }
        p_Var5 = *(_Rb_tree_node_base **)p_Var8;
      } while (p_Var5 != (_Rb_tree_node_base *)0x0);
      if ((p_Var6 == p_Var11) || (p_Var11 = p_Var6, plVar2 < *(long **)(p_Var6 + 0x20)))
      goto LAB_001840ac;
    }
    std::vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>>::operator=
              ((vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>> *)
               (p_Var6 + 0x28),
               (vector<Steinberg::IDependent*,std::allocator<Steinberg::IDependent*>> *)&local_70);
    if (local_70 != (long *)0x0) {
      operator_delete(local_70);
    }
  }
  else {
    p_Var6 = p_Var11;
    do {
      p_Var8 = p_Var5 + 0x18;
      if (plVar2 <= *(long **)(p_Var5 + 0x20)) {
        p_Var8 = p_Var5 + 0x10;
        p_Var6 = p_Var5;
      }
      p_Var5 = *(_Rb_tree_node_base **)p_Var8;
    } while (p_Var5 != (_Rb_tree_node_base *)0x0);
    if (p_Var6 == p_Var11) goto LAB_00184044;
    if (plVar2 < *(long **)(p_Var6 + 0x20)) {
      p_Var6 = p_Var11;
    }
    if (p_Var6 == p_Var11) goto LAB_00184044;
    plVar1 = *(long **)(p_Var6 + 0x30);
    if (plVar1 == *(long **)(p_Var6 + 0x38)) {
      local_48 = *(void **)(p_Var6 + 0x28);
      __n = (long)plVar1 - (long)local_48;
      if (__n == 0x7ffffffffffffff8) {
                    /* try { // try from 001841e0 to 001841eb has its CatchHandler @ 001841ec */
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("vector::_M_realloc_insert");
      }
      uVar13 = (long)__n >> 3;
      uVar7 = 1;
      if (__n != 0) {
        uVar7 = uVar13;
      }
      uVar10 = uVar7 + uVar13;
      if (uVar10 >> 0x3c != 0) {
        uVar10 = 0xfffffffffffffff;
      }
      if (CARRY8(uVar7,uVar13)) {
        uVar10 = 0xfffffffffffffff;
      }
      if (uVar10 == 0) {
        __dest = (void *)0x0;
      }
      else {
                    /* try { // try from 0018417b to 0018417f has its CatchHandler @ 001841ec */
        __dest = operator_new(uVar10 * 8);
      }
      pvVar3 = local_48;
      local_50 = (void *)((long)__dest + uVar13 * 8);
      *(long *)((long)__dest + uVar13 * 8) = param_2;
      if (0 < (long)__n) {
        memmove(__dest,local_48,__n);
      }
      lVar14 = (long)local_50 + 8;
      if (pvVar3 != (void *)0x0) {
        operator_delete(pvVar3);
      }
      *(void **)(p_Var6 + 0x28) = __dest;
      *(long *)(p_Var6 + 0x30) = lVar14;
      *(void **)(p_Var6 + 0x38) = (void *)((long)__dest + uVar10 * 8);
    }
    else {
      *plVar1 = param_2;
      *(long *)(p_Var6 + 0x30) = *(long *)(p_Var6 + 0x30) + 8;
    }
  }
  uVar9 = 0;
                    /* try { // try from 001840fa to 001840fc has its CatchHandler @ 001841f3 */
  (**(code **)(*(long *)local_58 + 0x18))();
LAB_001840fd:
  if (plVar2 != (long *)0x0) {
                    /* try { // try from 00184105 to 0018410a has its CatchHandler @ 00184200 */
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return uVar9;
}


