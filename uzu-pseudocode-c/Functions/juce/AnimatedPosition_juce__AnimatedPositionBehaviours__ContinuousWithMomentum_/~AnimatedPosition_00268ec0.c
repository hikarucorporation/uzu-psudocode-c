// Function : ~AnimatedPosition
// Namespace: juce:AnimatedPosition_juce__AnimatedPositionBehaviours__ContinuousWithMomentum_
// Entry    : 00268ec0
// Prototype: undefined ~AnimatedPosition(AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum> * this)
// Body     : 00268ec0 - 00268edf


/* juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::~AnimatedPosition()
    */

void __thiscall
juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::~AnimatedPosition
          (AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum> *this)

{
  *(undefined ***)this = &PTR__AnimatedPosition_0070e8f0;
  ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>
  ::~ListenerList((ListenerList<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener,juce::Array<juce::AnimatedPosition<juce::AnimatedPositionBehaviours::ContinuousWithMomentum>::Listener*,juce::DummyCriticalSection,0>>
                   *)(this + 0x78));
  Timer::~Timer((Timer *)this);
  return;
}


