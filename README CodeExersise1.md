# IMS-465
    I looked for the Frame-Rate Dependency first. I intentinaly looked for problems with the speed of somthing and found the player speed and it was not conected to denta time. Added * deltatime after. 
    For the other problem I added, virtual void PostInitializeComponents() override; to it and placed, Super::BeginPlay(); and, MaxHealth = 100.0f; insied the {} This way it would identify the max helth and the rest of the tex below would chang it to max helth at the start.

I am not the best at codeing since my major pathway is art and not development. I appreceate any advice you could give me for next time. Thanks.