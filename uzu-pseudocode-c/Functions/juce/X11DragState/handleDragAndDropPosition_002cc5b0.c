// Function : handleDragAndDropPosition
// Namespace: juce:X11DragState
// Entry    : 002cc5b0
// Prototype: undefined handleDragAndDropPosition(X11DragState * this, long param_1, ComponentPeer * param_2)
// Body     : 002cc5b0 - 002cc88f


/* juce::X11DragState::handleDragAndDropPosition(XClientMessageEvent const&, juce::ComponentPeer*)
    */

void __thiscall
juce::X11DragState::handleDragAndDropPosition
          (X11DragState *this,long param_1,ComponentPeer *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  void *__src;
  Desktop *this_00;
  undefined8 uVar3;
  XWindowSystem *pXVar4;
  uint uVar5;
  uint uVar6;
  void *local_130;
  float local_128;
  float fStack_124;
  void *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  if (*(long *)(this + 0x10) == 0) {
    return;
  }
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x38);
  if (*(long *)this == 0) {
    uVar3 = (**(code **)(*(long *)param_2 + 0x18))();
    *(undefined8 *)this = uVar3;
  }
  if (Desktop::instance == (Desktop *)0x0) {
    this_00 = operator_new(0x1d0);
                    /* try { // try from 002cc617 to 002cc61e has its CatchHandler @ 002cc890 */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  puVar2 = *(undefined8 **)(Desktop::instance + 0xe0);
  local_118 = (void *)0x0;
  uStack_110 = 0;
  uVar1 = *(uint *)((long)puVar2 + 0xc);
  if ((int)uVar1 < 1) {
    local_130 = (void *)0x0;
  }
  else {
    __src = (void *)*puVar2;
    uVar5 = uVar1 + (uVar1 >> 1) + 8;
    uVar6 = uVar5 & 0xfffffff8;
    if (0 < (int)uVar6) {
      local_118 = malloc((ulong)uVar6 * 0x70);
    }
    local_130 = local_118;
    uStack_110 = CONCAT44(uStack_110._4_4_,uVar5) & 0xfffffffffffffff8;
    memcpy(local_118,__src,(ulong)uVar1 * 0x70);
  }
  uStack_110 = CONCAT44(uVar1,(undefined4)uStack_110);
  local_108 = puVar2[2];
  uStack_100 = puVar2[3];
  local_f8 = puVar2[4];
  uStack_f0 = puVar2[5];
  local_e8 = puVar2[6];
  uStack_e0 = puVar2[7];
  local_d8 = puVar2[8];
  uStack_d0 = puVar2[9];
  local_c8 = puVar2[10];
  uStack_c0 = puVar2[0xb];
  local_b8 = puVar2[0xc];
  uStack_b0 = puVar2[0xd];
  local_a8 = puVar2[0xe];
  uStack_a0 = puVar2[0xf];
  uVar3 = Displays::physicalToLogical<int>
                    (&local_118,
                     (ulong)(uint)((int)*(ulong *)(param_1 + 0x48) >> 0x10) |
                     (*(ulong *)(param_1 + 0x48) & 0xffff) << 0x20);
                    /* try { // try from 002cc71a to 002cc723 has its CatchHandler @ 002cc8b3 */
  uVar3 = detail::ScalingHelpers::screenPosToLocalPos
                    (CONCAT44((float)(int)((ulong)uVar3 >> 0x20),(float)(int)uVar3),
                     *(long **)(param_2 + 8));
                    /* try { // try from 002cc724 to 002cc72f has its CatchHandler @ 002cc8ab */
  pXVar4 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                     ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                      XWindowSystem::singletonHolder);
  local_40 = *(long *)(param_1 + 0x58);
  if ((((local_40 != *(long *)(pXVar4 + 0x108)) && (local_40 != *(long *)(pXVar4 + 0x100))) &&
      (local_40 != *(long *)(pXVar4 + 0xf8))) && (local_40 != *(long *)(pXVar4 + 0xf0))) {
    if (local_40 != *(long *)(pXVar4 + 0xe8)) {
      local_40 = *(long *)(pXVar4 + 200);
    }
  }
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_48 = 0;
                    /* try { // try from 002cc7a3 to 002cc7ae has its CatchHandler @ 002cc8a3 */
  pXVar4 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                     ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                      XWindowSystem::singletonHolder);
  uStack_70 = *(undefined8 *)(pXVar4 + 0x90);
  local_58 = 3;
                    /* try { // try from 002cc7d2 to 002cc86d has its CatchHandler @ 002cc8b5 */
  sendDragAndDropMessage(this,(undefined4 *)&local_98);
  local_128 = (float)uVar3;
  fStack_124 = (float)((ulong)uVar3 >> 0x20);
  if ((*(int *)(this + 0x68) != SUB84((double)local_128 + DAT_005d9098,0)) ||
     (*(int *)(this + 0x6c) != SUB84((double)fStack_124 + DAT_005d9098,0))) {
    *(ulong *)(this + 0x68) =
         (ulong)((double)local_128 + DAT_005d9098) & 0xffffffff |
         (long)((double)fStack_124 + DAT_005d9098) << 0x20;
    if ((*(int *)(this + 0x5c) == 0) && (**(char **)(this + 0x60) == '\0')) {
      uVar3 = (**(code **)(*(long *)param_2 + 0x18))(param_2);
      updateDraggedFileList(this,param_1,uVar3);
      if ((*(int *)(this + 0x5c) == 0) && (**(char **)(this + 0x60) == '\0')) goto LAB_002cc86e;
    }
    ComponentPeer::handleDragMove(param_2,(long)(this + 0x50));
  }
LAB_002cc86e:
  uStack_110 = uStack_110 & 0xffffffff;
  free(local_130);
  return;
}


