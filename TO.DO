-- has been done
*** means do first

TODO:

i think lengths should be all measured in frames...

figure out fallback context menu
video frame:
	weird size bug when maximised (ctrl+up)
	playback controls
	tracker
	add scroll feature
	buffer gets too full? maybe seek issues or maybe EOF

clip list:
	remove clip should unlink VideoFrame
	unmaximising (ctrl+up) takes up full window...
	--connect to video frame****************
	multiremove

adding elements to a frame that's too small won't end well

tracker:
	attach to video frame
	hotkeys for video,audio,shape and effect track
	implement shape and effect track
	fix "addTrack" comments
	add track controls (mute, hide, move up/down, delete)
	MMB to cut?
	add snap points

need shape Clip
need effect Clip

browser:
	add thumbnails?
	text entry?
	add save mode
	add 'OK' and 'Cancel' buttons

track:
	add comments to code

strangeness with loadStatus timer
add quit modal dialogue

CPU still at 40 percent maybe try "eyeservice" (onlydraw if mouse has moved recently or something is updating)
make static flag for Frame. if enabled, an image will be drawn of the frame while it is unfocused

Framerates higher than forty are tough

fast playback is not supported

argument names could use some work

MAJOR:
	cut and resize references
	output composited tracker to video frame


Notes:

the reason children check their parent's focus in mouse events
	is because if the mouse leaves a frame while still performing
	its action, you don't want to lose focus. This isn't a problem
	in the keyboard events, hence parents check for focus first
	before calling a child's keyboard function

I'm thinking about using FFI to wrap ffmpeg and also to allow
	direct setting of image data.

	----------------------------------------------------------------

	Well, not that this isn't fun, but there is a bunch of underlying
	work that needs to be done in order for this to pan out. Namely,
	I need bindings for ffmpeg to lua, which would take a lot of work.
	Alternatives are to write write a video processing library in lua
	(which would probably run oh so slow), or to write a video library
	in C, which would require tons of work in addition to making extra
	wheels. What I have here is a fairly okay car (the interface and
	its workings) with no engine (video library to play back and
	process video.) I think I'll come back to this later, maybe for
	RCOS

	As things stand, mybe I'll finish the thing without actual video





















--add FFI stuff for setting imageData**********************************

--there are some bugs with resize, especially maximise

--implement video frame

	--fill in hotkeys

	--grab feature

	--"add clip" button

	--"remove clip" button

	--thumbnails

	--drag n drop

	--multiselect

	--scrollbar

--add right click context menu

	--hotkeys for in and out points

	--there is something odd happening with marker clipping

	--playhead jumps to mouse when resizing

	--make it only accept video files

	--make offset change if arrow keys go out of view

	--double click to select

	--multiselect bug with arrow keys

--CPU is at 84 percent, find out why -- IT WAS VSYNC

	--click and drag from clip list to tracker