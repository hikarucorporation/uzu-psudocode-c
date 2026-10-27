// Function : get<juce::RenderingHelpers::GlyphCache::get(juce::Font_const&,int)::{lambda(auto:1_const&)#1}>
// Namespace: juce:LruCache_juce__RenderingHelpers__GlyphCache__Key_std__vector_juce__GlyphLayer_std__allocat~39b8d02b
// Entry    : 00352980
// Prototype: _Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>> * get<juce::RenderingHelpers::GlyphCache::get(juce::Font_const&,int)::{lambda(auto:1_const&)#1}>(_Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>> * param_1, long * param_2, undefined8 param_3, undefined8 param_4, uint * param_5, ulong param_6)
// Body     : 00352980 - 00352fc5


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::vector<juce::GlyphLayer, std::allocator<juce::GlyphLayer> > const&
   juce::LruCache<juce::RenderingHelpers::GlyphCache::Key, std::vector<juce::GlyphLayer,
   std::allocator<juce::GlyphLayer> >,
   128ul>::get<juce::RenderingHelpers::GlyphCache::get(juce::Font const&, int)::{lambda(auto:1
   const&)#1}>(juce::RenderingHelpers::GlyphCache::Key,
   juce::RenderingHelpers::GlyphCache::get(juce::Font const&, int)::{lambda(auto:1 const&)#1}&&) */

_Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>>
* __cdecl juce::
          LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>
          ::
          get<juce::RenderingHelpers::GlyphCache::get(juce::Font_const&,int)::_lambda(auto:1_const&)_1_>
                    (_Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>>
                     *param_1,long *param_2,undefined8 param_3,undefined8 param_4,uint *param_5,
                    ulong param_6)

{
  long *plVar1;
  pthread_mutex_t *__mutex;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  _Rb_tree_node_base *p_Var8;
  undefined8 uVar9;
  _Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>>
  *p_Var10;
  bool bVar11;
  int iVar12;
  int iVar13;
  _Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>>
  *p_Var14;
  _List_node_base *p_Var15;
  _Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>>
  *p_Var16;
  void *pvVar17;
  _Rb_tree_node_base *p_Var18;
  _Rb_tree_node_base *p_Var19;
  _Rb_tree_node_base *p_Var20;
  undefined8 extraout_RDX;
  long *plVar21;
  long *plVar22;
  _Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>>
  *p_Var23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 local_98 [16];
  ulong local_88;
  undefined1 local_78 [16];
  ulong local_68;
  undefined8 local_60;
  long *local_58;
  long *plStack_50;
  ulong local_40;
  long *local_38;
  
  __mutex = *(pthread_mutex_t **)(param_1 + 0x50);
  iVar12 = pthread_mutex_lock(__mutex);
  if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar12);
  }
  plVar21 = param_2;
  p_Var14 = std::
            _Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>>
            ::find(param_1,param_2);
  if (p_Var14 != param_1 + 8) {
    pvVar2 = *(void **)(p_Var14 + 0x48);
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
    std::__detail::_List_node_base::_M_unhook();
    operator_delete(pvVar2);
                    /* try { // try from 003529db to 003529e4 has its CatchHandler @ 00353052 */
    p_Var15 = operator_new(0x18);
    *(_Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>>
      **)(p_Var15 + 0x10) = p_Var14;
    std::__detail::_List_node_base::_M_hook(p_Var15);
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
    *(_List_node_base **)(p_Var14 + 0x48) = p_Var15;
    p_Var16 = p_Var14;
    goto LAB_00352f97;
  }
  iVar12 = *(int *)(param_1 + 0x48);
  pthread_mutex_unlock(__mutex);
                    /* try { // try from 00352a15 to 00352a36 has its CatchHandler @ 0035306c */
  fVar24 = detail::FontRendering::getEffectiveHeight
                     (param_2,plVar21,extraout_RDX,param_4,param_5,param_6);
  local_58 = (long *)CONCAT44(local_58._4_4_,fVar24);
  Font::SharedFontInternal::getTypefacePtr
            ((SharedFontInternal *)&local_38,*param_2,param_2,param_4,param_5,param_6);
  local_78 = ZEXT416((uint)(*(float *)(*param_2 + 0x70) * local_58._0_4_));
  local_68 = (ulong)local_58 & 0xffffffff;
                    /* try { // try from 00352a7d to 00352a8e has its CatchHandler @ 00353031 */
  Typeface::getLayersForGlyph
            ((undefined8 *)local_98,local_38,*(int *)(*param_2 + 0x60),*(uint *)(param_2 + 1),
             (float *)local_78);
  LOCK();
  plVar21 = local_38 + 1;
  *(int *)plVar21 = (int)*plVar21 + -1;
  UNLOCK();
  if ((int)*plVar21 == 0) {
    (**(code **)(*local_38 + 8))(local_38);
  }
  iVar13 = pthread_mutex_lock(__mutex);
  if (iVar13 != 0) {
                    /* try { // try from 00352fbf to 00352fc5 has its CatchHandler @ 0035301c */
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar13);
  }
  if (iVar12 == *(int *)(param_1 + 0x48)) {
LAB_00352ad1:
    *(int *)(param_1 + 0x48) = iVar12 + 1;
    uVar3 = *(ulong *)(param_1 + 0x28);
    auVar25 = local_98;
    local_40 = local_88;
    while (0x7f < uVar3) {
      pvVar2 = *(void **)(param_1 + 0x30);
      local_98 = auVar25;
      local_88 = local_40;
      pvVar17 = (void *)std::_Rb_tree_rebalance_for_erase
                                  (*(_Rb_tree_node_base **)((long)pvVar2 + 0x10),
                                   (_Rb_tree_node_base *)p_Var14);
      std::
      _Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>>
      ::_M_drop_node(pvVar17);
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
      *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
      std::__detail::_List_node_base::_M_unhook();
      operator_delete(pvVar2);
      auVar25 = local_98;
      local_40 = local_88;
      uVar3 = *(ulong *)(param_1 + 0x28);
    }
    local_98._0_8_ = auVar25._0_8_;
    plVar21 = (long *)local_98._0_8_;
    local_98._8_8_ = auVar25._8_8_;
    plVar22 = (long *)local_98._8_8_;
    local_58 = (long *)local_98._0_8_;
    plStack_50 = (long *)local_98._8_8_;
    local_98 = (undefined1  [16])0x0;
    local_88 = 0;
    local_60 = 0;
    p_Var20 = (_Rb_tree_node_base *)p_Var14;
    if (*(_Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>>
          **)(param_1 + 0x10) ==
        (_Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>>
         *)0x0) {
LAB_00352c03:
                    /* try { // try from 00352c03 to 00352c11 has its CatchHandler @ 00352ffe */
      p_Var16 = operator_new(0x50);
      p_Var18 = (_Rb_tree_node_base *)(p_Var16 + 0x20);
      lVar4 = *param_2;
      *(long *)(p_Var16 + 0x20) = lVar4;
      *param_2 = 0;
      iVar12 = (int)param_2[1];
      *(int *)(p_Var16 + 0x28) = iVar12;
      *(long **)(p_Var16 + 0x30) = local_58;
      *(long **)(p_Var16 + 0x38) = plStack_50;
      *(ulong *)(p_Var16 + 0x40) = local_40;
      local_78 = (undefined1  [16])0x0;
      local_68 = 0;
      *(undefined8 *)(p_Var16 + 0x48) = 0;
      if (p_Var20 == (_Rb_tree_node_base *)p_Var14) {
        if (*(long *)(param_1 + 0x28) == 0) {
LAB_00352e8e:
          auVar25 = std::
                    _Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>>
                    ::_M_get_insert_unique_pos(param_1,(long *)p_Var18);
        }
        else {
          p_Var20 = *(_Rb_tree_node_base **)(param_1 + 0x20);
          if (*(int *)(p_Var20 + 0x28) < iVar12) {
LAB_00352e10:
            auVar7._8_8_ = 0;
            auVar7._0_8_ = p_Var20;
            auVar25 = auVar7 << 0x40;
            goto LAB_00352ea6;
          }
                    /* try { // try from 00352ceb to 00352cf2 has its CatchHandler @ 00352fd6 */
          if ((iVar12 < *(int *)(p_Var20 + 0x28)) ||
             (bVar11 = FontOptions::operator<
                                 ((FontOptions *)(*(long *)(p_Var20 + 0x20) + 0x18),
                                  (undefined8 *)(lVar4 + 0x18)), !bVar11)) goto LAB_00352e8e;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = *(ulong *)(param_1 + 0x20);
          auVar25 = auVar6 << 0x40;
        }
        p_Var20 = auVar25._0_8_;
        if (auVar25._8_8_ != 0) goto LAB_00352ea6;
LAB_00352ec3:
        std::
        _Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>>
        ::_M_drop_node(p_Var16);
        p_Var16 = (_Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>>
                   *)p_Var20;
      }
      else {
        iVar13 = *(int *)(p_Var20 + 0x28);
        if (iVar12 < iVar13) {
LAB_00352c7f:
          if (*(_Rb_tree_node_base **)(param_1 + 0x18) != p_Var20) {
            p_Var19 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var20);
                    /* try { // try from 00352e34 to 00352e38 has its CatchHandler @ 00352fde */
            if ((*(int *)(p_Var16 + 0x28) <= *(int *)(p_Var19 + 0x28)) &&
               ((*(int *)(p_Var16 + 0x28) < *(int *)(p_Var19 + 0x28) ||
                (bVar11 = FontOptions::operator<
                                    ((FontOptions *)(*(long *)(p_Var19 + 0x20) + 0x18),
                                     (undefined8 *)(*(long *)p_Var18 + 0x18)), !bVar11))))
            goto LAB_00352e8e;
            if (*(long *)(p_Var19 + 0x18) == 0) {
              p_Var20 = (_Rb_tree_node_base *)0x0;
            }
            else {
              p_Var19 = p_Var20;
            }
            auVar25._8_8_ = p_Var19;
            auVar25._0_8_ = p_Var20;
            goto LAB_00352ea6;
          }
          bVar11 = true;
        }
        else {
          if (iVar12 <= iVar13) {
                    /* try { // try from 00352d14 to 00352d1b has its CatchHandler @ 00352ff6 */
            bVar11 = FontOptions::operator<
                               ((FontOptions *)(lVar4 + 0x18),
                                (undefined8 *)(*(long *)(p_Var20 + 0x20) + 0x18));
            if (bVar11) goto LAB_00352c7f;
            iVar13 = *(int *)(p_Var20 + 0x28);
            iVar12 = *(int *)(p_Var16 + 0x28);
          }
                    /* try { // try from 00352e59 to 00352e5d has its CatchHandler @ 00352fce */
          if ((iVar12 <= iVar13) &&
             ((iVar12 < iVar13 ||
              (bVar11 = FontOptions::operator<
                                  ((FontOptions *)(*(long *)(p_Var20 + 0x20) + 0x18),
                                   (undefined8 *)(*(long *)p_Var18 + 0x18)), !bVar11))))
          goto LAB_00352ec3;
          if (*(_Rb_tree_node_base **)(param_1 + 0x20) == p_Var20) goto LAB_00352e10;
          p_Var19 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var20);
                    /* try { // try from 00352e81 to 00352e85 has its CatchHandler @ 00352fc6 */
          if ((*(int *)(p_Var19 + 0x28) <= *(int *)(p_Var16 + 0x28)) &&
             ((*(int *)(p_Var19 + 0x28) < *(int *)(p_Var16 + 0x28) ||
              (bVar11 = FontOptions::operator<
                                  ((FontOptions *)(*(long *)p_Var18 + 0x18),
                                   (undefined8 *)(*(long *)(p_Var19 + 0x20) + 0x18)), !bVar11))))
          goto LAB_00352e8e;
          p_Var8 = (_Rb_tree_node_base *)0x0;
          if (*(long *)(p_Var20 + 0x18) != 0) {
            p_Var20 = p_Var19;
            p_Var8 = p_Var19;
          }
          auVar25._8_8_ = p_Var20;
          auVar25._0_8_ = p_Var8;
LAB_00352ea6:
          p_Var20 = auVar25._8_8_;
          bVar11 = true;
          if ((auVar25._0_8_ == 0) && (p_Var20 != (_Rb_tree_node_base *)p_Var14)) {
            if (*(int *)(p_Var20 + 0x28) <= *(int *)(p_Var16 + 0x28)) {
              if (*(int *)(p_Var20 + 0x28) < *(int *)(p_Var16 + 0x28)) {
                bVar11 = false;
              }
              else {
                    /* try { // try from 00352ee4 to 00352ee8 has its CatchHandler @ 00352fe6 */
                bVar11 = FontOptions::operator<
                                   ((FontOptions *)(*(long *)p_Var18 + 0x18),
                                    (undefined8 *)(*(long *)(p_Var20 + 0x20) + 0x18));
              }
            }
          }
        }
        std::_Rb_tree_insert_and_rebalance
                  (bVar11,(_Rb_tree_node_base *)p_Var16,p_Var20,(_Rb_tree_node_base *)p_Var14);
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
      }
    }
    else {
      p_Var10 = *(_Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>>
                  **)(param_1 + 0x10);
      p_Var16 = p_Var14;
      local_78 = auVar25;
      local_68 = local_40;
      do {
        while( true ) {
          p_Var23 = p_Var10;
                    /* try { // try from 00352bce to 00352bd2 has its CatchHandler @ 00353074 */
          if ((*(int *)(p_Var23 + 0x28) < (int)param_2[1]) ||
             ((*(int *)(p_Var23 + 0x28) <= (int)param_2[1] &&
              (bVar11 = FontOptions::operator<
                                  ((FontOptions *)(*(long *)(p_Var23 + 0x20) + 0x18),
                                   (undefined8 *)(*param_2 + 0x18)), bVar11)))) break;
          p_Var10 = *(_Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>>
                      **)(p_Var23 + 0x10);
          p_Var16 = p_Var23;
          if (*(_Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>>
                **)(p_Var23 + 0x10) ==
              (_Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>>
               *)0x0) goto LAB_00352be9;
        }
        p_Var10 = *(_Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>>
                    **)(p_Var23 + 0x18);
      } while (*(_Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>>
                 **)(p_Var23 + 0x18) !=
               (_Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>>
                *)0x0);
LAB_00352be9:
      if (p_Var16 == p_Var14) goto LAB_00352c03;
                    /* try { // try from 00352d8a to 00352d8e has its CatchHandler @ 00352fee */
      if (((int)param_2[1] < *(int *)(p_Var16 + 0x28)) ||
         (((int)param_2[1] <= *(int *)(p_Var16 + 0x28) &&
          (bVar11 = FontOptions::operator<
                              ((FontOptions *)(*param_2 + 0x18),
                               (undefined8 *)(*(long *)(p_Var16 + 0x20) + 0x18)), bVar11)))) {
        p_Var20 = (_Rb_tree_node_base *)p_Var16;
        goto LAB_00352c03;
      }
      if (plVar21 != plVar22) {
        do {
          if ((char)plVar21[7] == '\0') {
            free((void *)*plVar21);
LAB_00352de8:
            *(undefined1 *)(plVar21 + 7) = 0xff;
          }
          else if ((char)plVar21[7] != -1) {
            plVar5 = (long *)*plVar21;
            if (plVar5 != (long *)0x0) {
              LOCK();
              plVar1 = plVar5 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)(*plVar5 + 8))();
              }
            }
            goto LAB_00352de8;
          }
          plVar21 = plVar21 + 8;
        } while (plVar21 != plVar22);
        plVar22 = (long *)local_78._0_8_;
      }
      if (plVar22 != (long *)0x0) {
        operator_delete(plVar22);
      }
    }
                    /* try { // try from 00352f01 to 00352f0a has its CatchHandler @ 0035300d */
    p_Var15 = operator_new(0x18);
    *(_Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>>
      **)(p_Var15 + 0x10) = p_Var16;
    std::__detail::_List_node_base::_M_hook(p_Var15);
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
    *(_List_node_base **)(p_Var16 + 0x48) = p_Var15;
  }
  else {
    p_Var16 = std::
              _Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>>
              ::find(param_1,param_2);
    if (p_Var16 == p_Var14) {
      iVar12 = *(int *)(param_1 + 0x48);
      goto LAB_00352ad1;
    }
  }
  uVar9 = local_98._8_8_;
  plVar21 = (long *)local_98._0_8_;
  if (local_98._0_8_ != local_98._8_8_) {
    do {
      if ((char)plVar21[7] == '\0') {
        free((void *)*plVar21);
LAB_00352f78:
        *(undefined1 *)(plVar21 + 7) = 0xff;
      }
      else if ((char)plVar21[7] != -1) {
        plVar22 = (long *)*plVar21;
        if (plVar22 != (long *)0x0) {
          LOCK();
          plVar5 = plVar22 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)(*plVar22 + 8))();
          }
        }
        goto LAB_00352f78;
      }
      plVar21 = plVar21 + 8;
    } while (plVar21 != (long *)uVar9);
  }
  if ((long *)local_98._0_8_ != (long *)0x0) {
    operator_delete((void *)local_98._0_8_);
  }
LAB_00352f97:
  pthread_mutex_unlock(__mutex);
  return p_Var16 + 0x30;
}


