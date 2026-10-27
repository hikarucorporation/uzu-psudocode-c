// Function : getRegisteredFds
// Namespace: juce:LinuxEventLoopInternal
// Entry    : 00486a40
// Prototype: LinuxEventLoopInternal * getRegisteredFds(LinuxEventLoopInternal * this)
// Body     : 00486a40 - 00486b45


/* juce::LinuxEventLoopInternal::getRegisteredFds() */

LinuxEventLoopInternal * __thiscall
juce::LinuxEventLoopInternal::getRegisteredFds(LinuxEventLoopInternal *this)

{
  ulong uVar1;
  undefined8 __mutex;
  undefined4 *puVar2;
  _Rb_tree_node_base *p_Var3;
  undefined4 *puVar4;
  undefined4 local_2c;
  
  __mutex = InternalRunLoop::singletonHolder._40_8_;
  if (InternalRunLoop::singletonHolder._40_8_ == 0) {
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  else {
    pthread_mutex_lock((pthread_mutex_t *)InternalRunLoop::singletonHolder._40_8_);
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    uVar1 = *(ulong *)(__mutex + 0x50);
    if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 00486b3a to 00486b45 has its CatchHandler @ 00486b46 */
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::reserve");
    }
    if (uVar1 == 0) {
      puVar4 = (undefined4 *)0x0;
      puVar2 = (undefined4 *)0x0;
    }
    else {
                    /* try { // try from 00486a91 to 00486a95 has its CatchHandler @ 00486b46 */
      puVar2 = operator_new(uVar1 * 4);
      *(undefined4 **)this = puVar2;
      *(undefined4 **)(this + 8) = puVar2;
      puVar4 = puVar2 + uVar1;
      *(undefined4 **)(this + 0x10) = puVar4;
    }
    p_Var3 = *(_Rb_tree_node_base **)(__mutex + 0x40);
    if (p_Var3 != (_Rb_tree_node_base *)(__mutex + 0x30)) {
      local_2c = *(undefined4 *)(p_Var3 + 0x20);
      if (puVar2 == puVar4) goto LAB_00486af0;
      do {
        *puVar2 = local_2c;
        *(undefined4 **)(this + 8) = puVar2 + 1;
        while( true ) {
          p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var3);
          if (p_Var3 == (_Rb_tree_node_base *)(__mutex + 0x30)) goto LAB_00486b21;
          puVar2 = *(undefined4 **)(this + 8);
          puVar4 = *(undefined4 **)(this + 0x10);
          local_2c = *(undefined4 *)(p_Var3 + 0x20);
          if (puVar2 != puVar4) break;
LAB_00486af0:
                    /* try { // try from 00486af0 to 00486afa has its CatchHandler @ 00486b4b */
          std::vector<int,std::allocator<int>>::_M_realloc_insert<int>
                    ((vector<int,std::allocator<int>> *)this,puVar4,&local_2c);
        }
      } while( true );
    }
LAB_00486b21:
    pthread_mutex_unlock((pthread_mutex_t *)__mutex);
  }
  return this;
}


