






























































































































































































































































































































































































local a=Naz.CFrame;for a,a in pairs(game.Workspace:GetDescendants())do if a:IsA("Seat")then a.Disabled=Naz.Options["Disable Seats"]end end;local b=Enum.Material.SmoothPlastic;local c={}local function d(a)local a=a:GetChildren()for b=1,#a do if a[b]:IsA('BasePart')then c[a[b]]=a[b].Material end;d(a[b])end end;d(workspace)if not Naz.Options["Low Graphics"]then for a in pairs(c)do a.Material=c[a]end else for a in pairs(c)do a.Material=b end end;local b={Invite="nigger",Folder="Silent.cc Settings",Version="1.0.0",Ping=5,Bypass={2788229376,12927359803,12867571492,11867820563,12618586930,13018411607,13018411607,9633073067,11956541652,10100958808,12815368779,13126185789}}if not LPH_OBFUSCATED and not LPH_JIT_ULTRA then LPH_NO_VIRTUALIZE=function(a)return a end;LRM_UserNote=""LRM_LinkedDiscordID=1;LRM_TotalExecutions=1;LRM_SecondsLeft=9999 end;getgenv().luarmor_vars={ID=LRM_LinkedDiscordID}local c=loadstring(game:HttpGet("https://raw.githubusercontent.com/23Asmo/evolutionfixes/main/akaliluaevo"))()local c=c.Notify;local d=loadstring(game:HttpGet("https://raw.githubusercontent.com/23Asmo/evolutionfixes/main/xaxanoti"))()local d=d.new({NotificationLifetime=3,NotificationPosition="Middle",TextFont=Enum.Font.Code,TextColor=Color3.fromRGB(255,255,255),TextSize=15,TextStrokeTransparency=0,TextStrokeColor=Color3.fromRGB(0,0,0)})d:BuildNotificationUI()getgenv().notify=function(a)if Naz.Options["Allow Notifications"]then if string.lower(Naz.Options["Notifcation Type"])=="akali"then c({Description=a;Title="Silent.cc";Duration=Naz.Options["Notifcation Duration"]})elseif string.lower(Naz.Options["Notifcation Type"])=="roblox"then game:GetService("StarterGui"):SetCore("SendNotification",{Title="Silent.cc",Text=a,Icon="rbxassetid://17642299576",Duration=Naz.Options["Notifcation Duration"]})elseif string.lower(Naz.Options["Notifcation Type"])=="xaxa"then d:Notify(a)end end end;local c={hoodmodded=function()for a,a in next,getgc(true)do if typeof(a)=="table"and rawget(a,"DoThings")then a.DoThings=function()end end end end,untitledhood=function()local a;a=hookmetamethod(game,"__namecall",function(b,...)if not checkcaller()and getnamecallmethod()=="FireServer"then if tostring(b.Name)==".gg/untitledhood"then local a={...}if tostring(a[1])=="ForceDetect"or tostring(a[1])=="TeleportDetect"or tostring(a[1])=="GUI_CHECK"then return end end end;return a(b,...)end)end,adonis=function()for a,a in pairs(getgc(true))do if pcall(function()return rawget(a,"indexInstance")end)and type(rawget(a,"indexInstance"))=="table"and(rawget(a,"indexInstance"))[1]=="kick"then a.tvk={"kick",function()return game.Workspace:WaitForChild("")end}end end end}if game.PlaceId==5602055394 or game.PlaceId==7951883376 then c.hoodmodded()elseif game.PlaceId==9183932460 or game.PlaceId==9435785899 then c.untitledhood()elseif table.find(b.Bypass,game.PlaceId)then c.adonis()end;local b=game:GetService("Players")local c=game:GetService("RunService")local d=game:GetService("Workspace")local e=game:GetService("GuiService")local f=nil;local g=nil;local h=nil;local i=nil;local j=0.133;local k=0.133;local l=Naz["Bullet Redirection"]["Target Part"]local m=Naz["Aim Assist"]["Target Part"]local n=b.LocalPlayer;local o=n:GetMouse()local p=d.CurrentCamera;local q=Vector3;local r=Vector2;local s=CFrame;if Naz["Options"]["Intro"]then local a=workspace.CurrentCamera;local b=a.ViewportSize.X;local a=a.ViewportSize.Y;local b=math.floor(b*0.5)local a=math.floor(a*0.5)local c=Instance.new("ScreenGui")local d=Instance.new("ImageLabel")c.Name="SpashScreen"c.Parent=game.CoreGui;c.ZIndexBehavior=Enum.ZIndexBehavior.Sibling;d.Name="Image"d.Parent=c;d.BackgroundColor3=Color3.fromRGB(255,255,255)d.BackgroundTransparency=1;d.Position=UDim2.new(0,b,0,a)d.Size=UDim2.new(0,825,0,600)d.Image="rbxassetid://18182498154"d.ImageTransparency=1;d.AnchorPoint=Vector2.new(0.5,0.5)local a=Instance.new("BlurEffect")a.Parent=game.Lighting;a.Size=0;a.Name=math.random(1,123123)local function b(a,b,c,d,e)local c=TweenInfo.new(c or 1,d or Enum.EasingStyle.Sine,Enum.EasingDirection.InOut)local a=game:GetService("TweenService"):Create(a,c,b)a:Play()end;b(d,{ImageTransparency=0},0.3)b(a,{Size=20},0.3)wait(3)b(d,{ImageTransparency=1},0.3)b(a,{Size=0},0.3)wait(0.3)end;if getgenv().Naz.Textures.Enabled==true then local function a(b)if b:IsA("BasePart")then b.Color=Naz.Textures.Color end;for b,b in ipairs(b:GetChildren())do a(b)end end;a(game.Workspace)end;local t=Drawing.new("Circle")t.Transparency=Naz.FOV["Bullet Redirection"].Transparency;t.Radius=Naz.FOV["Bullet Redirection"].Size*3;t.Visible=Naz.FOV["Bullet Redirection"].Visible;t.Color=Naz.FOV["Bullet Redirection"].Color;t.Thickness=Naz.FOV["Bullet Redirection"].Thickness;t.Filled=Naz.FOV["Bullet Redirection"].Filled;local u=Drawing.new("Circle")u.Transparency=Naz.FOV["Aim Assist"].Transparency;u.Radius=Naz.FOV["Aim Assist"].Size*3;u.Visible=Naz.FOV["Aim Assist"].Visible;u.Color=Naz.FOV["Aim Assist"].Color;u.Thickness=Naz.FOV["Aim Assist"].Thickness;u.Filled=Naz.FOV["Aim Assist"].Filled;OnScreen=function(a)local a,a=p:WorldToScreenPoint(a.Position)return a end;CalculateChance=function(a)a=math.floor(a)local b=math.floor(Random.new().NextNumber(Random.new(),0,1)*100)/100;return b<a/100 end;RayCastCheck=function(a,b)local c=n.Character or n.CharacterAdded.Wait(n.CharacterAdded)local e=p.CFrame.Position;local f=RaycastParams.new()f.FilterType=Enum.RaycastFilterType.Blacklist;f.FilterDescendantsInstances={c,p}local a=d.Raycast(d,e,a.Position-e,f)if(a)then local a=a.Instance;local a=(not a or Instance.new("Part").IsDescendantOf(a,b))return a end;return false end;Alive=function(a)if a and a.Character and a.Character:FindFirstChild("HumanoidRootPart")~=nil and a.Character:FindFirstChild("Humanoid")~=nil and a.Character:FindFirstChild("Head")~=nil then return true end;return false end;GetMagnitudeFromMouse=function(a)local a,b=p:WorldToScreenPoint(a.Position)if b then local a=(r.new(a.X,a.Y)-r.new(o.X,o.Y)).Magnitude;return a end;return math.huge end;GetPrediction=function()if Naz["Latency"]["Auto Prediction"].Enabled then local a=game:GetService("Stats").Network.ServerStatsItem["Data Ping"]:GetValueString()local a=tostring(a)local a=a:split(" ")local a=tonumber(a[1])if string.lower(Naz.Latency["Auto Prediction"]["Type"])=="regular"then return tonumber(a/225*0.1+0.1)elseif string.lower(Naz.Latency["Auto Prediction"]["Type"])=="beta"then if a<130 then return tonumber(a/1000+0.037)else return tonumber(a/1000+0.033)end elseif string.lower(Naz.Latency["Auto Prediction"]["Type"])=="v2"then return tonumber(0.1+(a/2000)+((a/1000)*(a/1500)*1.025))elseif string.lower(Naz.Latency["Auto Prediction"]["Type"])=="Auto"then if a<30 then return tonumber(Naz.Latency["Auto Prediction"]["AutoPred"].Ping20)elseif a<40 then return tonumber(Naz.Latency["Auto Prediction"]["AutoPred"].Ping30)elseif a<50 then return tonumber(Naz.Latency["Auto Prediction"]["AutoPred"].Ping40)elseif a<60 then return tonumber(Naz.Latency["Auto Prediction"]["AutoPred"].Ping50)elseif a<70 then return tonumber(Naz.Latency["Auto Prediction"]["AutoPred"].Ping60)elseif a<80 then return tonumber(Naz.Latency["Auto Prediction"]["AutoPred"].Ping70)elseif a<90 then return tonumber(Naz.Latency["Auto Prediction"]["AutoPred"].Ping80)elseif a<100 then return tonumber(Naz.Latency["Auto Prediction"]["AutoPred"].Ping90)elseif a<110 then return tonumber(Naz.Latency["Auto Prediction"]["AutoPred"].Ping100)elseif a<120 then return tonumber(Naz.Latency["Auto Prediction"]["AutoPred"].Ping110)elseif a<130 then return tonumber(Naz.Latency["Auto Prediction"]["AutoPred"].Ping120)elseif a<140 then return tonumber(Naz.Latency["Auto Prediction"]["AutoPred"].Ping130)elseif a<150 then return tonumber(Naz.Latency["Auto Prediction"]["AutoPred"].Ping140)elseif a<160 then return tonumber(Naz.Latency["Auto Prediction"]["AutoPred"].Ping150)elseif a<170 then return tonumber(Naz.Latency["Auto Prediction"]["AutoPred"].Ping160)elseif a<180 then return tonumber(Naz.Latency["Auto Prediction"]["AutoPred"].P1ing70)elseif a<190 then return tonumber(Naz.Latency["Auto Prediction"]["AutoPred"].Ping180)elseif a<200 then return tonumber(Naz.Latency["Auto Prediction"]["AutoPred"].Ping190)elseif a<210 then return tonumber(Naz.Latency["Auto Prediction"]["AutoPred"].Ping200)end end else return tonumber(Naz["Bullet Redirection"].Prediction)end end;FindCrew=function(a)if a:FindFirstChild("DataFolder")and a.DataFolder:FindFirstChild("Information")and a.DataFolder.Information:FindFirstChild("Crew")and n:FindFirstChild("DataFolder")and n.DataFolder:FindFirstChild("Information")and n.DataFolder.Information:FindFirstChild("Crew")then if n.DataFolder.Information:FindFirstChild("Crew").Value~=nil and a.DataFolder.Information:FindFirstChild("Crew").Value~=nil and a.DataFolder.Information:FindFirstChild("Crew").Value~=""and n.DataFolder.Information:FindFirstChild("Crew").Value~=""then return true end end;return false end;CheckDistance=function(a)if(a.Character.HumanoidRootPart.Position-game.Players.LocalPlayer.Character.HumanoidRootPart.Position).Magnitude>Naz.Checks.Distance["Max Distance"]then return true else return false end end;GetDistance=function(a)if a~=nil and a.Character and a.Character:FindFirstChild("HumanoidRootPart")then return math.floor((a.Character.HumanoidRootPart.Position-game.Players.LocalPlayer.Character.HumanoidRootPart.Position).Magnitude)else return 0 end end;GetHealth=function(a)if a~=nil and a.Character and a.Character:FindFirstChild("Humanoid")then return tostring(math.floor(a.Character.Humanoid.Health).."/"..math.floor(a.Character.Humanoid.MaxHealth))else return"0/100"end end;GetGunName=function(a)local a=string.split(string.split(a,"[")[2],"]")[1]return a end;GetCurrentWeaponName=function()if n.Character and n.Character:FindFirstChildWhichIsA("Tool")then local a=n.Character:FindFirstChildWhichIsA("Tool")if string.find(a.Name,"%[")and string.find(a.Name,"%]")and not string.find(a.Name,"Wallet")and not string.find(a.Name,"Phone")then return GetGunName(a.Name)end end;return nil end;WTS=function(a)local a=p:WorldToScreenPoint(a.Position)return r.new(a.X,a.Y)end;Filter=function(a)if(a:IsA('BasePart'))then return true end end;mousePosv2=function()return r.new(o.X,o.Y)end;IsOnScreen2=function(a)local a=p:WorldToScreenPoint(a.Position)return a end;FilterObjs=function(a)if string.find(a.Name,"Gun")then return end;if table.find({"Part","MeshPart","BasePart"},a.ClassName)then return true end end;function GetClosestPointOfPart(a)local b=o.UnitRay;b=b.Origin+(b.Direction*(a.Position-b.Origin).Magnitude)local c=(b.Y>=(a.Position-a.Size/2).Y and b.Y<=(a.Position+a.Size/2).Y)and(a.Position+Vector3.new(0,-a.Position.Y+b.Y,0))or a.Position;local d=RaycastParams.new()d.FilterType=Enum.RaycastFilterType.Whitelist;d.FilterDescendantsInstances={a}local a=game:GetService("Workspace"):Raycast(b,(c-b),d)if a then return a.Position else return o.Hit.Position end end;GetClosestBodyPart=function()local a=f.Character;local b=1/0;local c=nil;if(a and a:GetChildren())then for a,a in next,a:GetChildren()do if FilterObjs(a)and IsOnScreen2(a)then local d=(WTS(a)-r.new(o.X,o.Y)).Magnitude;if(d<b)then b=d;c=a end end end end;if Naz["Bullet Redirection"]["Nearest Part To Cursor"]then l=tostring(c)else l=Naz["Bullet Redirection"]["Target Part"]end end;GetClosestBodyPart2=function()local a=g.Character;local b=1/0;local c=nil;if(a and a:GetChildren())then for a,a in next,a:GetChildren()do if FilterObjs(a)and IsOnScreen2(a)then local d=(WTS(a)-r.new(o.X,o.Y)).Magnitude;if(d<b)then b=d;c=a end end end end;if Naz["Aim Assist"]["Nearest Part To Cursor"]then m=tostring(c)else m=Naz["Aim Assist"]["Target Part"]end end;UpdateFOV=function()t.Transparency=Naz.FOV["Bullet Redirection"].Transparency;t.Radius=Naz.FOV["Bullet Redirection"].Size*3;t.Visible=Naz.FOV["Bullet Redirection"].Visible;t.Color=Naz.FOV["Bullet Redirection"].Color;t.Thickness=Naz.FOV["Bullet Redirection"].Thickness;t.Filled=Naz.FOV["Bullet Redirection"].Filled;t.Position=r.new(o.X,o.Y+e:GetGuiInset().Y)u.Transparency=Naz.FOV["Aim Assist"].Transparency;u.Radius=Naz.FOV["Aim Assist"].Size*3;u.Visible=Naz.FOV["Aim Assist"].Visible;u.Color=Naz.FOV["Aim Assist"].Color;u.Thickness=Naz.FOV["Aim Assist"].Thickness;u.Filled=Naz.FOV["Aim Assist"].Filled;u.Position=r.new(o.X,o.Y+e:GetGuiInset().Y)end;local d={1496494935}GetClosestPlayer=function()local a=nil;local c=math.huge;local d=CalculateChance(Naz["Bullet Redirection"]["Hit Chance"])if not d then return nil end;for b,b in pairs(b:GetPlayers())do if b.Character and b~=n and b.Character:FindFirstChild("HumanoidRootPart")then if not OnScreen(b.Character.HumanoidRootPart)then continue end;if Naz.Checks["Visible Check"]and not RayCastCheck(b.Character.HumanoidRootPart,b.Character)then continue end;if Naz.Checks["K.O Check"]and b.Character:FindFirstChild("BodyEffects")then local a;if b.Character.BodyEffects:FindFirstChild("KO")then a=b.Character.BodyEffects:FindFirstChild("KO").Value elseif b.Character.BodyEffects:FindFirstChild("K.O")then a=b.Character.BodyEffects:FindFirstChild("K.O").Value end;if a then continue end end;if Naz.Checks["Crew Check"]and FindCrew(b)and b.DataFolder.Information:FindFirstChild("Crew").Value==n.DataFolder.Information:FindFirstChild("Crew").Value then continue end;if Naz.Checks["Friend Check"]and game.Players.LocalPlayer:IsFriendsWith(b.UserId)then continue end;if Naz.Checks["Distance"].Enabled and CheckDistance(b)then continue end;local d=GetMagnitudeFromMouse(b.Character.HumanoidRootPart)if(d<c and t.Radius+10>d)then c=d;a=b end end end;f=a end;GetClosestPlayer2=function()local a=nil;local c=math.huge;for b,b in pairs(b:GetPlayers())do if b.Character and b~=n and b.Character:FindFirstChild("HumanoidRootPart")then if not OnScreen(b.Character.HumanoidRootPart)then continue end;if Naz.Checks["Visible Check"]and not RayCastCheck(b.Character.HumanoidRootPart,b.Character)then continue end;if Naz.Checks["K.O Check"]and b.Character:FindFirstChild("BodyEffects")then local a;if b.Character.BodyEffects:FindFirstChild("KO")then a=b.Character.BodyEffects:FindFirstChild("KO").Value elseif b.Character.BodyEffects:FindFirstChild("K.O").Value then a=b.Character.BodyEffects:FindFirstChild("K.O").Value end;if a then continue end end;if Naz.Checks["Crew Check"]and FindCrew(b)and b.DataFolder.Information:FindFirstChild("Crew").Value==n.DataFolder.Information:FindFirstChild("Crew").Value then continue end;if Naz.Checks["Friend Check"]and game.Players.LocalPlayer:IsFriendsWith(b.UserId)then continue end;if Naz.Checks["Distance"].Enabled and CheckDistance(b)then continue end;local d=GetMagnitudeFromMouse(b.Character.HumanoidRootPart)if(d<c and u.Radius+10>d)then c=d;a=b end end end;g=a end;game:GetService("RunService").RenderStepped:Connect(function()if Naz["Bullet Redirection"].Enabled and Naz["Bullet Redirection"]["Closest Point"]and f~=nil and f.Character then h=GetClosestPointOfPart(f.Character[l])end end)game:GetService("RunService").RenderStepped:Connect(function()if Naz["Aim Assist"].Enabled and Naz["Aim Assist"]["Closest Point"]and g~=nil and g.Character then i=GetClosestPointOfPart(g.Character[m])end end)local b={["Players"]=game:GetService("Players"),["RunService"]=game:GetService("RunService")}local b={LocalPlayer=b["Players"].LocalPlayer,RenderStepped=b["RunService"].RenderStepped}local function b(a,b)if a~=nil and b~=nil then local c=a:FindFirstChildOfClass(b)if not c then c=a:FindFirstChild(b)end;if c then return c end end end;c.Heartbeat:Connect(function()UpdateFOV()if Naz["Bullet Redirection"].Enabled then if string.lower(Naz["Bullet Redirection"].Mode)=="fov"then GetClosestPlayer()end;j=GetPrediction()if f~=nil then GetClosestBodyPart()end end;if Naz["Aim Assist"].Enabled then if string.lower(Naz["Aim Assist"].Mode)=="fov"then GetClosestPlayer2()end;k=GetPrediction()if g~=nil then GetClosestBodyPart2()end end end)o.KeyDown:Connect(function(a)local b=Naz["Bullet Redirection"]["Target Key"]:lower()local c=Naz["Aim Assist"]["Target Key"]:lower()if(a==b)and Naz["Bullet Redirection"].Enabled then if string.lower(Naz["Bullet Redirection"].Mode)=="target"then if f==nil then GetClosestPlayer()if Naz["Bullet Redirection"].Notify then if f~=nil then notify("Silent.cc Locked onto: "..tostring(f))else notify("No Player Inside the Fov")end end else f=nil;if Naz["Bullet Redirection"].Notify then notify("Silent.cc Unlocked!")end end end end;if(a==c and Naz["Aim Assist"].Enabled)then if string.lower(Naz["Aim Assist"].Mode)=="target_toggle"then if g==nil then GetClosestPlayer2()if Naz["Aim Assist"].Notify then if g~=nil then notify("Silent.cc Locked onto: "..tostring(g))else notify("No Player Inside the Fov")end end else g=nil;if Naz["Aim Assist"].Notify then notify("Silent.cc Unlocked!")end end end end end)o.KeyDown:Connect(function(a)local b=Naz["Aim Assist"]["Target Key"]:lower()if(a==b and Naz["Aim Assist"].Enabled)then if string.lower(Naz["Aim Assist"].Mode)=="target_hold"then if g==nil then GetClosestPlayer2()if Naz["Aim Assist"].Notify then if g~=nil then notify("Locked onto: "..tostring(g))else notify("No Player In FOV")end end end end end end)o.KeyUp:Connect(function(a)local b=Naz["Aim Assist"]["Target Key"]:lower()if(a==b)then if string.lower(Naz["Aim Assist"].Mode)=="target_hold"then g=nil;if Naz["Aim Assist"].Notify then notify("Unlocked")end end end end)spawn(function()while wait(0.5)do if Naz.Options["Mute Boomboxes"]==true then for a,a in pairs(game.Players:GetChildren())do if a.Name~=game.Players.LocalPlayer.Name then if game.Players:FindFirstChild(a.Name)then repeat wait()until a.Character;for a,a in pairs(a.Character:GetDescendants())do if a:IsA("Sound")and a.Playing==true then a.Playing=false end end end end end end end end)local function b(a)if nil_check(a)and a.Character and a.Character:FindFirstChild(l)then local b=a.Character.HumanoidRootPart;local a=a.Character;local a=b.Position;local c=tick()wait(0.00350)local b=b.Position;local d=tick()local e=(b-a)local f=d-c;local e=e/f;a=b;c=d;return e end end;local d=q.new(0,0,0)local e=q.new(0,0,0)o.KeyDown:Connect(function(a)local b=Naz.Resolver.Keybind:lower()if(a==b)then if Naz.Resolver["Keybind Enabled"]then if Naz.Resolver.Enabled==true then Naz.Resolver.Enabled=false;notify("Resolver disabled.")else Naz.Resolver.Enabled=true;notify("Resolver enabled.")end end end end)c.Heartbeat:Connect(function()if Naz.Resolver.Enabled and Naz["Bullet Redirection"].Enabled then if Naz.Resolver.Method=="Delta"then if f~=nil then d=b(f)end end end;local a;local b;local c;local d;if f~=nil then a=f.Character[l]if Naz["Bullet Redirection"]["Closest Point"]then b=CFrame.new(h)else b=a.CFrame end;d=p:WorldToViewportPoint(f.Character[l].Position)c=workspace.CurrentCamera:WorldToViewportPoint(b.Position+q.new(0,Naz["Bullet Redirection"]["Target Part Offset"],0)+(f.Character[l].AssemblyLinearVelocity*Naz["Bullet Redirection"].Prediction))end end)c.Heartbeat:Connect(function()if Naz.Resolver.Enabled and Naz["Aim Assist"].Enabled then if Naz.Resolver.Method=="Delta"then if g~=nil then e=b(g)end end end;local a;local b;local c;local d;if g~=nil then a=g.Character[m]if Naz["Aim Assist"]["Closest Point"]then b=CFrame.new(i)else b=a.CFrame end;d=p:WorldToViewportPoint(g.Character[m].Position)c=workspace.CurrentCamera:WorldToViewportPoint(b.Position+q.new(0,Naz["Aim Assist"]["Target Part Offset"],0)+(g.Character[m].AssemblyLinearVelocity*Naz["Aim Assist"].Prediction))end end)local b={"UpdateMousePosI","MousePos","MOUSE","MousePosDEBUG","GetMousePos"}local function b()if game.PlaceId==2788229376 or game.PlaceId==9825515356 or game.PlaceId==16033173781 or game.PlaceId==7213786345 then return"UpdateMousePosI"elseif game.PlaceId==5602055394 or game.PlaceId==7951883376 then return"MousePos"elseif game.PlaceId==10100958808 or game.PlaceId==12645617354 or game.PlaceId==14171242539 or game.PlaceId==14412436145 or game.PlaceId==14412355918 or game.PlaceId==14413720089 or game.PlaceId==14413712255 or game.PlaceId==14412601883 then return"MOUSE"elseif game.PlaceId==1590803567 then return"MousePosDEBUG"elseif game.PlaceId==9825515356 then return"GetMousePos"else return"UpdateMousePos"end end;local function c()for a,a in pairs(game.ReplicatedStorage:GetChildren())do if a.Name=="MainEvent"or a.Name=="Bullets"or a.Name==".gg/untitledhood"or a.Name=="Remote"or a.Name=="MAINEVENT"then return a end end end;game.Players.LocalPlayer.Character.ChildAdded:Connect(LPH_NO_VIRTUALIZE(function(a)if a:IsA("Tool")then a.Activated:Connect(function()if Naz["Bullet Redirection"].Enabled then if f~=nil then local a=f.Character[l]local e=q.new(0,0,0)local g=a.Position;local i=false;if Naz.Airshot.Enabled then if f.Character.Humanoid.FloorMaterial==Enum.Material.Air then e=q.new(0,Naz.Airshot["Jump Offset"],0)end end;if Naz["Bullet Redirection"]["Closest Point"]then g=h end;if Naz.Resolver.Enabled then i=true end;if i then if Naz.Resolver.Method=="Move Direction"then a.Velocity=f.Character.Humanoid.MoveDirection*f.Character.Humanoid.WalkSpeed;a.AssemblyLinearVelocity=f.Character.Humanoid.MoveDirection*f.Character.Humanoid.WalkSpeed elseif Naz.Resolver.Method=="No Prediction"then a.Velocity=q.new(0,0,0)a.AssemblyLinearVelocity=q.new(0,0,0)elseif Naz.Resolver.Method=="Delta"or Naz.Resolver.Method=="Recalculate"then a.Velocity=d;a.AssemblyLinearVelocity=d end end;if Naz["Bullet Redirection"]["Anti Ground Shots"]then a.Velocity=q.new(a.Velocity.X,a.Velocity.Y*0.5,a.Velocity.Z)a.AssemblyLinearVelocity=q.new(a.Velocity.X,a.Velocity.Y*0.5,a.Velocity.Z)end;local a=g+q.new(0,Naz["Bullet Redirection"]["Target Part Offset"],0)+e+a.Velocity*j;c():FireServer(b(),a)end end end)end end))game.Players.LocalPlayer.CharacterAdded:Connect(LPH_NO_VIRTUALIZE(function(a)a.ChildAdded:Connect(function(a)if a:IsA("Tool")then a.Activated:Connect(function()if Naz["Bullet Redirection"].Enabled then if f~=nil then local a=f.Character[l]local e=q.new(0,0,0)local g=a.Position;local i=false;if Naz.Airshot.Enabled then if f.Character.Humanoid.FloorMaterial==Enum.Material.Air then e=q.new(0,Naz.Airshot["Jump Offset"],0)end end;if Naz["Bullet Redirection"]["Closest Point"]then g=h end;if Naz.Resolver.Enabled then i=true end;if i then if Naz.Resolver.Method=="Move Direction"then a.Velocity=f.Character.Humanoid.MoveDirection*f.Character.Humanoid.WalkSpeed;a.AssemblyLinearVelocity=f.Character.Humanoid.MoveDirection*f.Character.Humanoid.WalkSpeed elseif Naz.Resolver.Method=="No Prediction"then a.Velocity=q.new(0,0,0)a.AssemblyLinearVelocity=q.new(0,0,0)elseif Naz.Resolver.Method=="Delta"or Naz.Resolver.Method=="Recalculate"then a.Velocity=d;a.AssemblyLinearVelocity=d end end;if Naz["Bullet Redirection"]["Anti Ground Shots"]then a.Velocity=q.new(a.Velocity.X,a.Velocity.Y*0.5,a.Velocity.Z)a.AssemblyLinearVelocity=q.new(a.Velocity.X,a.Velocity.Y*0.5,a.Velocity.Z)end;local a=g+q.new(0,Naz["Bullet Redirection"]["Target Part Offset"],0)+e+a.Velocity*j;c():FireServer(b(),a)end end end)end end)end))LPH_NO_VIRTUALIZE(function()game:GetService("RunService").RenderStepped:Connect(function()if Naz["Flags"]["Unlock Outside FOV"]and g and g.Character and g.Character:FindFirstChild(m)then if u.Radius<(Vector2.new(p:WorldToScreenPoint(g.Character.HumanoidRootPart.Position).X,p:WorldToScreenPoint(g.Character.HumanoidRootPart.Position).Y)-Vector2.new(o.X,o.Y)).Magnitude then g=nil end end;if Naz["Flags"]["Unlock On KO"]==true and g~=nil and g.Character and g.Character:FindFirstChild(m)then if g.Character:FindFirstChild("BodyEffects")then local a;if g.Character.BodyEffects:FindFirstChild("KO")then a=g.Character.BodyEffects:FindFirstChild("KO").Value elseif g.Character.BodyEffects:FindFirstChild("K.O")then a=g.Character.BodyEffects:FindFirstChild("K.O").Value end;if a then g=nil;if Naz["Aim Assist"].Notify then notify("Target Knocked, Unlocked.")end end end end;if Naz["Flags"]["Unlock Behind Wall"]==true and string.lower(Naz["Aim Assist"].Mode)~="fov"and g~=nil and g.Character and g.Character:FindFirstChild(m)then if not RayCastCheck(g.Character[m],g.Character)then g=nil;if Naz["Aim Assist"].Notify then notify("Target Behind Wall, Unlocked.")end end end;if Naz["Aim Assist"].Enabled and g and g.Character and g.Character:FindFirstChild(m)then if g~=nil then local a=g.Character[m]local b=q.new(0,0,0)local c=a.Position;local e=1;local f=q.new(0,0,0)local h=false;if Naz["Aim Assist"].Shake.Enabled then f=q.new(math.random(-Naz["Aim Assist"].Shake.X,Naz["Aim Assist"].Shake.X),math.random(-Naz["Aim Assist"].Shake.Y,Naz["Aim Assist"].Shake.Y),math.random(-Naz["Aim Assist"].Shake.Z,Naz["Aim Assist"].Shake.Z))*0.1 end;if Naz["Aim Assist"].Smoothness.Enabled then e=Naz["Aim Assist"].Smoothness.Value end;if Naz.Airshot.Enabled then if g.Character.Humanoid.FloorMaterial==Enum.Material.Air then b=q.new(0,Naz.Airshot["Jump Offset"],0)if Naz.Airshot["Aim Assist Smoothness"].Enabled then e=Naz.Airshot["Aim Assist Smoothness"]["New Smoothness"]end end end;if Naz["Aim Assist"]["Closest Point"]then c=i end;if Naz.Resolver.Enabled then h=true end;if h then if Naz.Resolver.Method=="Move Direction"then a.Velocity=g.Character.Humanoid.MoveDirection*g.Character.Humanoid.WalkSpeed;a.AssemblyLinearVelocity=g.Character.Humanoid.MoveDirection*g.Character.Humanoid.WalkSpeed elseif Naz.Resolver.Method=="No Prediction"then a.Velocity=q.new(0,0,0)a.AssemblyLinearVelocity=q.new(0,0,0)elseif Naz.Resolver.Method=="Delta"then a.Velocity=d;a.AssemblyLinearVelocity=d end end;if Naz["Bullet Redirection"]["Anti Ground Shots"]then a.Velocity=q.new(a.Velocity.X,a.Velocity.Y*0.5,a.Velocity.Z)a.AssemblyLinearVelocity=q.new(a.Velocity.X,a.Velocity.Y*0.5,a.Velocity.Z)end;local a=c+q.new(0,Naz["Aim Assist"]["Target Part Offset"],0)+b+a.Velocity*k+f;local a=s.new(p.CFrame.p,a)p.CFrame=p.CFrame:Lerp(a,e,Naz["Aim Assist"]["Easing Style"],Enum.EasingDirection.InOut)end end end)end)()if a.Enabled then repeat wait()until game:IsLoaded()local b=game:service('Players')local b=b.LocalPlayer;repeat wait()until b.Character;local b=game:service('UserInputService')local c=game:service('RunService')getgenv().Multiplier=0.5;local c=true;local d;b.InputBegan:connect(function(d)if d.KeyCode==Enum.KeyCode.LeftBracket then Multiplier=Multiplier+0.01;print(Multiplier)wait(0.2)while b:IsKeyDown(Enum.KeyCode.LeftBracket)do wait()Multiplier=Multiplier+0.01;print(Multiplier)end end;if d.KeyCode==Enum.KeyCode.RightBracket then Multiplier=Multiplier-0.01;print(Multiplier)wait(0.2)while b:IsKeyDown(Enum.KeyCode.RightBracket)do wait()Multiplier=Multiplier-0.01;print(Multiplier)end end;if d.KeyCode==Enum.KeyCode[a.Toggle:upper()]then c=not c;if c==true then repeat game.Players.LocalPlayer.Character.HumanoidRootPart.CFrame=game.Players.LocalPlayer.Character.HumanoidRootPart.CFrame+game.Players.LocalPlayer.Character.Humanoid.MoveDirection*Multiplier;game:GetService("RunService").Stepped:wait()until c==false end end end)local function a()if game.PlaceId==2788229376 or game.PlaceId==9825515356 or game.PlaceId==16033173781 or game.PlaceId==7213786345 then a()"UpdateMousePosI"else game.Players.LocalPlayer:Kick("Wait for silentcc to update")end end;local a=game:GetService("Players")local b=game:GetService("UserInputService")local c=game:GetService("TweenService")local d=game:GetService("GuiService")local e=a.LocalPlayer;local f=game.Workspace.CurrentCamera;local function g()return d:IsTenFootInterface()end;local function d(a)local a,a=f:WorldToViewportPoint(a.Position)return a end;local function f(a)if g()then return end;local a=a.Character;if a then local a=a:FindFirstChild("Head")if a then if d(a)then local b=Instance.new("BillboardGui")b.Size=UDim2.new(4*getgenv().Naz["Blink FOV"]["ScaleFactor"],0,7.5*getgenv().Naz["Blink FOV"]["ScaleFactor"],0)b.AlwaysOnTop=true;b.Parent=a;local a=Instance.new("Frame")a.Size=UDim2.new(1,0,1,0)a.BackgroundTransparency=0.5;a.BackgroundColor3=Color3.fromRGB(170,0,255)a.Parent=b;local d=Instance.new("UIGradient")d.Rotation=45;d.Parent=a;d.Color=ColorSequence.new{ColorSequenceKeypoint.new(0,Color3.new(0,0,0)),ColorSequenceKeypoint.new(1,Color3.fromRGB(170,0,255))}local d=TweenInfo.new(getgenv().Naz["Blink FOV"]["Blink Speed"],Enum.EasingStyle.Linear,Enum.EasingDirection.Out)local a=c:Create(a,d,{BackgroundTransparency=1})a:Play()a.Completed:Connect(function()b:Destroy()end)b.StudsOffset=getgenv().Naz["Blink FOV"]["BoxPosition"]end end end end;local function c()for a,a in pairs(a:GetPlayers())do if a~=e then f(a)end end end;local function a(a)if a.KeyCode==getgenv().Naz["Blink FOV"]["Blink Key"]then c()end end;b.InputBegan:Connect(a)local c=game.Players.LocalPlayer;local d=c:GetMouse()local function e()local a=getgenv().CrosshairConfig;local a=a.Crosshair;local b=Instance.new("ScreenGui")b.Parent=c:WaitForChild("PlayerGui")local c=Instance.new("Frame")c.Size=UDim2.new(0,a.Size*2+a.Length,0,a.Size*2+a.Length)c.Position=UDim2.new(0,0,0,0)c.BackgroundTransparency=1;c.AnchorPoint=Vector2.new(0.5,0.5)c.Parent=b;local e=Instance.new("Frame")e.Size=UDim2.new(0,a.Size,0,a.Length)e.Position=UDim2.new(0.5,-a.Size/2,0,-a.Size-a.Gap)e.BackgroundColor3=Color3.new(1,1,1)e.BorderSizePixel=0;e.Parent=c;local f=Instance.new("Frame")f.Size=UDim2.new(0,a.Size,0,a.Length)f.Position=UDim2.new(0.5,-a.Size/2,0,a.Size+a.Gap)f.BackgroundColor3=Color3.new(1,1,1)f.BorderSizePixel=0;f.Parent=c;local g=Instance.new("Frame")g.Size=UDim2.new(0,a.Length,0,a.Size)g.Position=UDim2.new(0,-a.Size-a.Gap,0.5,-a.Size/2)g.BackgroundColor3=Color3.new(1,1,1)g.BorderSizePixel=0;g.Parent=c;local h=Instance.new("Frame")h.Size=UDim2.new(0,a.Length,0,a.Size)h.Position=UDim2.new(0,a.Size+a.Gap,0.5,-a.Size/2)h.BackgroundColor3=Color3.new(1,1,1)h.BorderSizePixel=0;h.Parent=c;local i=Instance.new("TextLabel")i.Text="Velocity."i.Font=Enum.Font.SourceSans;i.TextSize=14;i.TextColor3=Color3.new(1,1,1)i.BackgroundTransparency=1;i.Size=UDim2.new(0,100,0,14)i.Parent=b;local j=Instance.new("TextLabel")j.Text="cc"j.Font=Enum.Font.SourceSans;j.TextSize=14;j.TextColor3=Color3.fromRGB(170,0,255)j.BackgroundTransparency=1;j.Size=UDim2.new(0,14,0,14)j.Parent=b;local function b()c.Position=UDim2.new(0,d.X,0,d.Y)i.Position=UDim2.new(0,d.X+10,0,d.Y+10)j.Position=UDim2.new(0,d.X+90,0,d.Y+10)end;d.Move:Connect(b)local b=true;local d=game:GetService("RunService")local function i()local e=0;d.RenderStepped:Connect(function(d)if b then e=e+a.SpinSpeed*d;c.Rotation=e end end)end;local function b()local b=0;d.RenderStepped:Connect(function(c)if a.RainbowEnabled then b=(b+a.RainbowSpeed*c)%1;local a=Color3.fromHSV(b,1,1)e.BackgroundColor3=a;f.BackgroundColor3=a;g.BackgroundColor3=a;h.BackgroundColor3=a end end)end;b()i()end;c.CharacterAdded:Connect(e)if c.Character then e()end;local function c()getgenv().CrosshairConfig.Crosshair.RainbowEnabled=not 
