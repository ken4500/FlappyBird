<GameFile>
  <PropertyGroup Name="MainScene" Type="Scene" ID="a2ee0952-26b5-49ae-8bf9-4f1d6279b798" Version="3.10.0.0" />
  <Content ctype="GameProjectContent">
    <Content>
      <Animation Duration="30" Speed="1.0000" ActivedAnimationName="gameover">
        <Timeline ActionTag="601866551" Property="VisibleForFrame">
          <BoolFrame FrameIndex="0" Tween="False" Value="True" />
          <BoolFrame FrameIndex="10" Tween="False" Value="False" />
        </Timeline>
        <Timeline ActionTag="-972469422" Property="Position">
          <PointFrame FrameIndex="20" X="144.0000" Y="362.0000">
            <EasingData Type="2" />
          </PointFrame>
          <PointFrame FrameIndex="30" X="144.0000" Y="352.0000">
            <EasingData Type="2" />
          </PointFrame>
        </Timeline>
        <Timeline ActionTag="-972469422" Property="VisibleForFrame">
          <BoolFrame FrameIndex="0" Tween="False" Value="False" />
          <BoolFrame FrameIndex="10" Tween="False" Value="True" />
        </Timeline>
        <Timeline ActionTag="-972469422" Property="Alpha">
          <IntFrame FrameIndex="10" Value="0">
            <EasingData Type="0" />
          </IntFrame>
          <IntFrame FrameIndex="20" Value="127">
            <EasingData Type="2" />
          </IntFrame>
          <IntFrame FrameIndex="30" Value="255">
            <EasingData Type="2" />
          </IntFrame>
        </Timeline>
        <Timeline ActionTag="-1390408424" Property="Alpha">
          <IntFrame FrameIndex="1" Value="0">
            <EasingData Type="0" />
          </IntFrame>
          <IntFrame FrameIndex="5" Value="153">
            <EasingData Type="1" />
          </IntFrame>
          <IntFrame FrameIndex="9" Value="0">
            <EasingData Type="2" />
          </IntFrame>
        </Timeline>
        <Timeline ActionTag="-1390408424" Property="VisibleForFrame">
          <BoolFrame FrameIndex="0" Tween="False" Value="False" />
          <BoolFrame FrameIndex="1" Tween="False" Value="True" />
        </Timeline>
      </Animation>
      <AnimationList>
        <AnimationInfo Name="gameover" StartIndex="1" EndIndex="30">
          <RenderColor A="150" R="192" G="192" B="192" />
        </AnimationInfo>
      </AnimationList>
      <ObjectData Name="Scene" ctype="GameNodeObjectData">
        <Size X="288.0000" Y="512.0000" />
        <Children>
          <AbstractNodeData Name="back" ActionTag="999146604" Tag="3" IconVisible="False" PositionPercentXEnabled="True" PositionPercentYEnabled="True" ctype="SpriteObjectData">
            <Size X="288.0000" Y="512.0000" />
            <Children>
              <AbstractNodeData Name="character" ActionTag="-1751664700" Tag="6" IconVisible="True" LeftMargin="89.0000" RightMargin="199.0000" TopMargin="257.6000" BottomMargin="254.4000" StretchWidthEnable="False" StretchHeightEnable="False" InnerActionSpeed="1.0000" CustomSizeEnabled="False" ctype="ProjectNodeObjectData">
                <Size X="0.0000" Y="0.0000" />
                <AnchorPoint />
                <Position X="89.0000" Y="254.4000" />
                <Scale ScaleX="1.0000" ScaleY="1.0000" />
                <CColor A="255" R="255" G="255" B="255" />
                <PrePosition X="0.3090" Y="0.4969" />
                <PreSize X="0.0000" Y="0.0000" />
                <FileData Type="Normal" Path="Character.csd" Plist="" />
              </AbstractNodeData>
              <AbstractNodeData Name="scoreLabel" ActionTag="601866551" Tag="61" IconVisible="False" PositionPercentXEnabled="True" LeftMargin="132.0000" RightMargin="132.0000" TopMargin="61.0000" BottomMargin="397.0000" LabelText="0" ctype="TextBMFontObjectData">
                <Size X="24.0000" Y="54.0000" />
                <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
                <Position X="144.0000" Y="424.0000" />
                <Scale ScaleX="1.0000" ScaleY="1.0000" />
                <CColor A="255" R="255" G="255" B="255" />
                <PrePosition X="0.5000" Y="0.8281" />
                <PreSize X="0.0833" Y="0.1055" />
                <LabelBMFontFile_CNB Type="Normal" Path="Assets/font/font1.fnt" Plist="" />
              </AbstractNodeData>
              <AbstractNodeData Name="ground" ActionTag="1929538871" Tag="47" IconVisible="True" RightMargin="288.0000" TopMargin="402.0000" BottomMargin="110.0000" StretchWidthEnable="False" StretchHeightEnable="False" InnerActionSpeed="1.0000" CustomSizeEnabled="False" ctype="ProjectNodeObjectData">
                <Size X="0.0000" Y="0.0000" />
                <AnchorPoint />
                <Position Y="110.0000" />
                <Scale ScaleX="1.0000" ScaleY="1.0000" />
                <CColor A="255" R="255" G="255" B="255" />
                <PrePosition Y="0.2148" />
                <PreSize X="0.0000" Y="0.0000" />
                <FileData Type="Normal" Path="Ground.csd" Plist="" />
              </AbstractNodeData>
              <AbstractNodeData Name="logo_game_over" ActionTag="-972469422" VisibleForFrame="False" Alpha="0" Tag="30" IconVisible="False" PositionPercentXEnabled="True" LeftMargin="42.0000" RightMargin="42.0000" TopMargin="123.0000" BottomMargin="335.0000" ctype="SpriteObjectData">
                <Size X="204.0000" Y="54.0000" />
                <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
                <Position X="144.0000" Y="362.0000" />
                <Scale ScaleX="1.0000" ScaleY="1.0000" />
                <CColor A="255" R="255" G="255" B="255" />
                <PrePosition X="0.5000" Y="0.7070" />
                <PreSize X="0.7083" Y="0.1055" />
                <FileData Type="Normal" Path="Assets/logo/logo_game_over.png" Plist="" />
                <BlendFunc Src="1" Dst="771" />
              </AbstractNodeData>
            </Children>
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <Position X="144.0000" Y="256.0000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <CColor A="255" R="255" G="255" B="255" />
            <PrePosition X="0.5000" Y="0.5000" />
            <PreSize X="1.0000" Y="1.0000" />
            <FileData Type="Normal" Path="Assets/background/back1.png" Plist="" />
            <BlendFunc Src="1" Dst="771" />
          </AbstractNodeData>
          <AbstractNodeData Name="white" ActionTag="-1390408424" VisibleForFrame="False" Alpha="0" Tag="17" IconVisible="False" PositionPercentXEnabled="True" PositionPercentYEnabled="True" LeftMargin="128.0000" RightMargin="128.0000" TopMargin="240.0000" BottomMargin="240.0000" ctype="SpriteObjectData">
            <Size X="32.0000" Y="32.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <Position X="144.0000" Y="256.0000" />
            <Scale ScaleX="9.0000" ScaleY="16.0000" />
            <CColor A="255" R="255" G="255" B="255" />
            <PrePosition X="0.5000" Y="0.5000" />
            <PreSize X="0.1111" Y="0.0625" />
            <FileData Type="Normal" Path="Assets/UI/white.png" Plist="" />
            <BlendFunc Src="1" Dst="771" />
          </AbstractNodeData>
        </Children>
      </ObjectData>
    </Content>
  </Content>
</GameFile>