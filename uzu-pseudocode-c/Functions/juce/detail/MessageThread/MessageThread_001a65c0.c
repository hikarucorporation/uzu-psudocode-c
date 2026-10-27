// Function : MessageThread
// Namespace: juce:detail:MessageThread
// Entry    : 001a65c0
// Prototype: undefined MessageThread(MessageThread * this)
// Body     : 001a65c0 - 001a664b


/* juce::detail::MessageThread::MessageThread() */

void __thiscall juce::detail::MessageThread::MessageThread(MessageThread *this)

{
  juce ajStack_28 [8];
  SystemStats local_20 [8];
  
  SystemStats::getJUCEVersion(local_20);
                    /* try { // try from 001a65d9 to 001a65ea has its CatchHandler @ 001a6659 */
  operator+(ajStack_28,(String *)local_20,": Plugin Message Thread");
                    /* try { // try from 001a65eb to 001a65f7 has its CatchHandler @ 001a664c */
  Thread::Thread((Thread *)this,(long *)ajStack_28,0);
  juce::String::~String((String *)ajStack_28);
  juce::String::~String((String *)local_20);
  *(undefined ***)this = &PTR__MessageThread_007052e0;
  WaitableEvent::WaitableEvent((WaitableEvent *)(this + 0x198),(WaitableEvent)0x0);
                    /* try { // try from 001a6625 to 001a6641 has its CatchHandler @ 001a666e */
  Thread::startThread((Thread *)this,1);
  WaitableEvent::wait(DAT_005db348,(WaitableEvent *)(this + 0x198));
  return;
}


