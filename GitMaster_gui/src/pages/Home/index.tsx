import { useState, PropsWithChildren, ReactNode } from "react";
import style from "./style.module.css";
type Props = {}


function PushFilesToGit() {
  return (
    <div>
      <input placeholder="file name" id="file" />
      <button>Add Files</button>
    </div>


  )
}

function ProjectFolder() {
  return (<div className={style.ProjectDiv}>
    <input type="file" id="file" placeholder="Add Project Folder" />
    <p>Project -{`>`} </p>

  </div>);
}

function CurrentView({ children }: PropsWithChildren) {
  return <div className={style.CurrentView}>
    {children}
  </div>;
}
function Home({ }: Props) {
  const [homeShown, setHomeShown] = useState<boolean>(true);
  const [pushFileShown, setPushFileShown] = useState<boolean>(false);
  const [projectFolder, setProjectFolder] = useState<boolean>(true);
  const [intoView, setIntoView] = useState<ReactNode>(<PushFilesToGit />);
  // const [homeShown,setHomeShown] = useState<boolean>(false);
  // const [homeShown,setHomeShown] = useState<boolean>(false);
  //
  return (
    <div className={style.Container}>
      <div className={style.Header}>
        <h1>GitMaster</h1>
        <p>Git Client To Make Interaction with git easier for juniors</p>
      </div>

      <div>{projectFolder ? <ProjectFolder /> : <>project</>}</div>
      {homeShown ?
        <div className={style.optionBar}>
          <button onClick={() => { setHomeShown(false); console.log("okey"); }}>
            Push Files To Git
          </button>  <button>
            Push Files To Git
          </button>  <button>
            Push Files To Git
          </button>  <button>
            Push Files To Git
          </button>  <button>
            Push Files To Git
          </button>  <button>
            Push Files To Git
          </button>
        </div> : <><CurrentView children={intoView} /> <div className={style.xbtn} onClick={() => {
          setHomeShown(true);
        }}>X</div></>}


    </div>
  )
}

export default Home
