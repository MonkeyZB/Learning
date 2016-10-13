//////////////////////////////////////////////////////////////////////////
// Blending from startFrame of m_motion1 into endFrame of m_motion2 with interpFrame number of interpolation frames and interpolation type is in type
// Follow the instructions below to complete this function
// Write some member functions if they help you to solve the problem
void Player::Blend( const unsigned int& startFrame, const unsigned int& endFrame, const unsigned int& interpFrame, const unsigned int& type )
{
    // Compute total frame number for the target motion
    unsigned int totalFrame = 1; // replace with your code

    // Release and allocation space for result motion m_motion3
    m_motion3.FreeSpace();
    m_motion3.m_jointCount = m_skeleton.GetJointCount();
    m_motion3.m_frameCount = totalFrame;
    m_motion3.AllocateSpace();

    // Copy frames from m_motion1 to m_motion3
    // m_motion3[0, ..., startFrame] = m_motion1[0, ..., startFrame]
    for (unsigned int i = 0; i < startFrame + 2; i++)
    {
        m_motion3.m_keyFrames[i]->Clone(*(m_motion1.m_keyFrames[i]));
    }

    // Estimate root translation and rotation for m_motion3[startFrame + interpFrame + 1]
    // Estimate the speed of the roots during the start and end frames.
    // Find the position and orientation of the end frame roots repectively.
    // TODO: Start your code here...

    // m_motion3[startFrame + interpFrame + 1, ..., totalFrame] = m_motion2[endFrame, ..., frameCount] with proper root translation and rotation
    // TODO: Start your code here...

    // m_motion3[startFrame + 1, ..., startFrame + interpFrame] are computed from proper interpolations including
    // root translation interpolation
    // joint rotation interpolation using Cubic, SLERP and SQUAD
    float fPerc;
    Frame s0, s1;
    s0.SetJointCount(m_motion3.m_jointCount);
    s1.SetJointCount(m_motion3.m_jointCount);
    Frame *pFrame;
    for (int i = startFrame + 1, int j = 0; i < startFrame + interpFrame + 1; i++, j++)
    {
        fPerc = float(j + 1) / float(interpFrame + 1);
        pFrame = m_motion3.GetFrameAt(i);
        switch(type){
        case eCUBIC:
            // check the Frame class and the methods inside might be helpful.
            // TODO: cubic interpolation
            break;
        case eSLERP:
            // TODO: SLERP
            break;
        case eSQUAD:
            // TODO: SQUAD
            break;
        }
    }
}
