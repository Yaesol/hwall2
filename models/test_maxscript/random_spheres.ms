-- Make Sphere

maxItems = 20

makeSphere()

fn makeSphere =
(
  for i = 1 to maxItems while i <= maxItems do (
	  Sphere radius:1 segments:32	length:(random 0 100) width:(random 0 100) height:(random 0 100)       pos:[(random -100 100),(random -100 100),(random -100 100)]       mapcoords:on isSelected:on
      $.wirecolor = color (random 0 255) (random 0 255) (random 0 255)
  )
)