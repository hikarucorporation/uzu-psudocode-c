// Function : attached
// Namespace: juce:JuceVST3EditController:JuceVST3Editor
// Entry    : 001b5cb0
// Prototype: undefined8 attached(JuceVST3Editor * this, long param_1, char * param_2, undefined8 param_3, uint * param_4, undefined8 param_5)
// Body     : 001b5cb0 - 001b5e68


/* juce::JuceVST3EditController::JuceVST3Editor::attached(void*, char const*) */

undefined8 __thiscall
juce::JuceVST3EditController::JuceVST3Editor::attached
          (JuceVST3Editor *this,long param_1,char *param_2,undefined8 param_3,uint *param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 extraout_RDX;
  uint uVar5;
  undefined8 uVar6;
  JuceVST3Editor *pJVar7;
  undefined1 *puVar8;
  long *local_28;
  
  uVar6 = 1;
  if ((param_1 != 0) && (param_2 != (char *)0x0)) {
    cVar2 = (**(code **)(**(long **)(this + 0xd0) + 0xd0))();
    if (cVar2 != '\0') {
      iVar4 = strcmp(param_2,"X11EmbedWindowID");
      if (iVar4 == 0) {
        puVar1 = *(undefined8 **)(this + 0x30);
        local_28 = (long *)0x0;
        if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 001b5d1a to 001b5d25 has its CatchHandler @ 001b5e88 */
          (**(code **)*puVar1)(puVar1,0x71b1c8,&local_28);
        }
        if (this[0xa8] != (JuceVST3Editor)0x0) {
          this[0xa8] = (JuceVST3Editor)0x0;
          ScopedRunLoop::~ScopedRunLoop((ScopedRunLoop *)(this + 0x78));
        }
                    /* try { // try from 001b5d44 to 001b5d4e has its CatchHandler @ 001b5ea4 */
        ScopedRunLoop::ScopedRunLoop((ScopedRunLoop *)(this + 0x78),(long *)&local_28);
        this[0xa8] = (JuceVST3Editor)0x1;
        if (local_28 != (long *)0x0) {
                    /* try { // try from 001b5d63 to 001b5d65 has its CatchHandler @ 001b5e80 */
          (**(code **)(*local_28 + 0x10))();
        }
        *(long *)(this + 0x28) = param_1;
        createContentWrapperComponentIfNeeded(this);
        if (*(long **)(*(long *)(this + 0xd8) + 0xf0) == (long *)0x0) {
          uVar5 = 0;
        }
        else {
          bVar3 = (**(code **)(**(long **)(*(long *)(this + 0xd8) + 0xf0) + 0x1c0))();
          uVar5 = (uint)(bVar3 ^ 1) << 0xb;
        }
        applyScaleFactor(*(float *)(*(long *)(this + 200) + 0x62bc),(long)this,0);
        Component::setOpaque(*(Component **)(this + 0xd8),1);
        Component::addToDesktop(*(Component **)(this + 0xd8),uVar5,*(undefined8 *)(this + 0x28));
        pJVar7 = (JuceVST3Editor *)0x1;
        Component::setVisible(*(Component **)(this + 0xd8),1);
        ContentWrapperComponent::resizeHostWindow(*(ContentWrapperComponent **)(this + 0xd8));
        if (*(long **)(this + 0x38) != (long *)0x0) {
          pJVar7 = this;
          (**(code **)(**(long **)(this + 0x38) + 0x158))();
        }
        if (detail::PluginUtilities::getHostType()::hostType == '\0') {
          puVar8 = &detail::PluginUtilities::getHostType()::hostType;
          iVar4 = __cxa_guard_acquire();
          if (iVar4 != 0) {
                    /* try { // try from 001b5e50 to 001b5e54 has its CatchHandler @ 001b5e69 */
            detail::PluginUtilities::getHostType()::hostType =
                 PluginHostType::getHostType(puVar8,pJVar7,extraout_RDX,param_3,param_4,param_5);
            __cxa_guard_release(&detail::PluginUtilities::getHostType()::hostType);
          }
        }
        uVar6 = 0;
        if (detail::PluginUtilities::getHostType()::hostType - 0x35U < 5) {
          Timer::startTimer((Timer *)(this + 0x50),200);
        }
      }
    }
  }
  return uVar6;
}


